/*
** control_functions.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Sat Dec 20 14:56:55 2014 cristopher toozs-hobson
** Last update Sun Dec 21 13:01:11 2014 cristopher toozs-hobson
*/

#include "mlx.h"
#include "./sources/include/wolf3D.h"
#include "./sources/include/my.h"

void		move_left(t_strct *s)
{
  if (s->pl.tab[(int)(s->pl.pos_x - 0.11)][(int)(s->pl.pos_y + 0.01)] != 1
      && s->pl.tab[(int)(s->pl.pos_x - 0.11)][(int)(s->pl.pos_y - 0.01)] != 1)
    {
      s->pl.pos_x -= 0.1;
      draw_walls(s, s->pl.tab);
    }
  mlx_put_image_to_window(s->d.mlx_pt, s->d.win_pt, s->d.img_pt, 0, 0);
}

void		move_up(t_strct *s)
{
  if (s->pl.tab[(int)(s->pl.pos_x + 0.01)][(int)(s->pl.pos_y + 0.11)] != 1
      && s->pl.tab[(int)(s->pl.pos_x - 0.01)][(int)(s->pl.pos_y + 0.11)] != 1)
    {
      s->pl.pos_y += 0.1;
      draw_walls(s, s->pl.tab);
    }
  mlx_put_image_to_window(s->d.mlx_pt, s->d.win_pt, s->d.img_pt, 0, 0);
}

void		move_right(t_strct *s)
{
  if (s->pl.tab[(int)(s->pl.pos_x + 0.11)][(int)(s->pl.pos_y + 0.01)] != 1
      && s->pl.tab[(int)(s->pl.pos_x + 0.11)][(int)(s->pl.pos_y - 0.01)] != 1)
    {
      s->pl.pos_x += 0.1;
      draw_walls(s, s->pl.tab);
    }
  mlx_put_image_to_window(s->d.mlx_pt, s->d.win_pt, s->d.img_pt, 0, 0);
}

void		move_down(t_strct *s)
{
  if (s->pl.tab[(int)(s->pl.pos_x + 0.01)][(int)(s->pl.pos_y - 0.11)] != 1
      && s->pl.tab[(int)(s->pl.pos_x - 0.01)][(int)(s->pl.pos_y - 0.11)] != 1)
    {
      s->pl.pos_y -= 0.1;
      draw_walls(s, s->pl.tab);
    }
  mlx_put_image_to_window(s->d.mlx_pt, s->d.win_pt, s->d.img_pt, 0, 0);
}
