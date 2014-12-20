/*
** parsing_functions.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Fri Dec 12 19:33:12 2014 cristopher toozs-hobson
** Last update Sat Dec 20 16:53:26 2014 cristopher toozs-hobson
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "./sources/include/wolf3D.h"
#include "./sources/include/my.h"

t_pars		*my_put_in_list(t_pars *chain, char *data)
{
  t_pars	*block;
  t_pars	*tmp;

  if ((block = malloc(sizeof(*block))) == NULL)
    return (NULL);
  tmp = chain;
  block->line = data;
  block->next = NULL;
  if (chain != NULL)
    {
      while (chain->next != NULL)
	chain = chain->next;
      chain->next = block;
    }
  else
    return (block);
  return (tmp);
}

int		list_count(t_pars *list)
{
  int		i;
  t_pars	*tmp;

  tmp = list;
  i = 0;
  while (tmp != NULL)
    {
      i++;
      tmp = tmp->next;
    }
  return (i);
}

int		list_maker(int fd, t_pars **lines)
{
  char		*s;

  *lines = NULL;
  while ((s = get_next_line(fd)))
    if ((*lines = my_put_in_list(*lines, s)) == NULL)
      return (1);
  return (0);
}

int		**put_in_table(t_pars *lines, t_play *p, int decount)
{
  int		**tab;
  int		n;
  int		i;

  n = 0;
  i = 0;
  tab = malloc(sizeof(int *) * (list_count(lines) + 1));
  while (lines != NULL)
    {
      tab[i] = malloc(sizeof(int) * (decount + 1));
      while (n < decount)
	{
	  tab[i][n] = my_getnbr(my_str_to_wordtab(lines->line)[n]);
	  p->pos_x = (tab[i][n] == 2) ? n + 1 : p->pos_x;
	  p->pos_y = (tab[i][n] == 2) ? i + 1 : p->pos_y;
	  n++;
	}
      tab[i][n] = '\0';
      i++;
      n = 0;
      lines = lines->next;
    }
  tab[i] = NULL;
  return (tab);
}

int		**make_tab(t_strct *strct)
{
  int		**tab;
  t_pars	*lines;
  int		n;
  t_play	*play;

  play = &strct->pl;
  list_maker(open(strct->arg[1], O_RDONLY), &lines);
  n = 0;
  while (my_str_to_wordtab(lines->line)[n] != NULL)
    n++;
  tab = put_in_table(lines, play, n);
  return (tab);
}
