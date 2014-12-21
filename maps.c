/*
** maps.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Sun Dec 21 16:27:45 2014 cristopher toozs-hobson
** Last update Sun Dec 21 18:56:16 2014 cristopher toozs-hobson
*/

#include <stdlib.h>
#include "./sources/include/wolf3D.h"

int		**static_one(t_strct *s)
{
  int		**tab;
  s->pl.pos_x = 2;
  s->pl.pos_y = 2;
  tab = create_map(7, 7, 1);
  return (tab);
}

int		**static_two(t_strct *s)
{
  int		**tab;
  s->pl.pos_x = 3;
  s->pl.pos_y = 3;
  tab = create_map(15, 9, 2);
  return (tab);
}

int		**static_three(t_strct *s)
{
  int		**tab;
  s->pl.pos_x = 2;
  s->pl.pos_y = 2;
  tab = create_map(6, 6, 3);
  return (tab);
}
