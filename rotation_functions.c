/*
** rotation_functions.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Sun Dec 21 13:12:01 2014 cristopher toozs-hobson
** Last update Sun Dec 21 13:24:52 2014 cristopher toozs-hobson
*/

#include "mlx.h"
#include "./sources/include/wolf3D.h"

void		turn_left(t_strct *s)
{
  s->pl.a -= 5;
  draw_walls(s, s->pl.tab);
  mlx_put_image_to_window(s->d.mlx_pt, s->d.win_pt, s->d.img_pt, 0, 0);
}

void		turn_right(t_strct *s)
{
  s->pl.a += 5;
  draw_walls(s, s->pl.tab);
  mlx_put_image_to_window(s->d.mlx_pt, s->d.win_pt, s->d.img_pt, 0, 0);
}
