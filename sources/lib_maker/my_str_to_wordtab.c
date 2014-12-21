/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/toozs-_c/rendu/Piscine_C_J08/ex_04
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Mon Nov  3 10:09:14 2014 cristopher toozs-hobson
** Last update Sun Dec 21 12:55:51 2014 cristopher toozs-hobson
*/

#include <stdlib.h>
#include "./my.h"

int	count_words(char *str)
{
  int	i;
  int	cpt;

  i = 0;
  cpt = 0;
  while (str[i] != '\0')
    {
      if  ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
	   || (str[i] >= '0' && str[i] <= '9'))
	{
	  cpt++;
	  while (str[i] && ((str[i] >= 'a' && str[i] <= 'z')
			    || (str[i] >= 'A' && str[i] <= 'Z')
			    || (str[i] >= '0' && str[i] <= '9')))
	    i++;
	}
      i++;
    }
  return (cpt);
}

int	count_chars(char *str, int *i)
{
  int	cpt;

  cpt = 0;
  while (str[*i] && ((str[*i] >= 'a' && str[*i] <= 'z')
		     || (str[*i] >= 'A' && str[*i] <= 'Z')
		     || (str[*i] >= '0' && str[*i] <= '9')))
    {
      cpt++;
      *i = *i + 1;
    }
  return (cpt);
}

char		**my_str_to_wordtab(char *str)
{
  int		i;
  int		words;
  int		size;
  char		**tab;

  i = 0;
  size = 0;
  words = count_words(str);
  tab = malloc(sizeof(char *) * (words + 1));
  while (str[i] && words > 0)
    {
      if ((str[i] >= 'a' && str[i] <= 'z')
	  || (str[i] >= 'A' && str[i] <= 'Z')
	  || (str[i] >= '0' && str[i] <= '9'))
	{
	  tab[size] = my_strdup(str + i);
	  tab[size] [count_chars(str, &i)] = '\0';
	  size++;
	  words = words - 1;
	}
      i++;
    }
  tab[size] = NULL;
  return (tab);
}
