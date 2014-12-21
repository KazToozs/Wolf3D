/*
** control_functions.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Sat Dec 20 14:56:55 2014 cristopher toozs-hobson
** Last update Sun Dec 21 20:41:06 2014 cristopher toozs-hobson
*/

#include <math.h>
#include "mlx.h"
#include "./sources/include/wolf3D.h"
#include "./sources/include/my.h"

void		move_left(t_strct *s)
{
  double        ang;

  ang = s->pl.a * M_PI / 180.0;
  if (s->pl.tab[(int)(s->pl.pos_x + (cos(ang + (M_PI / 2)) / 30))]
      [(int)(s->pl.pos_y + (sin(ang + (M_PI / 2)) / 30))] != 1)
    {
      s->pl.pos_x += cos(ang + (M_PI / 2)) / 30;
      s->pl.pos_y += sin(ang + (M_PI / 2)) / 30;
      draw_walls(s, s->pl.tab);
    }
  mlx_put_image_to_window(s->d.mlx_pt, s->d.win_pt, s->d.img_pt, 0, 0);
}

void		move_up(t_strct *s)
{
  double        ang;

  ang = s->pl.a * M_PI / 180.0;
  if (s->pl.tab[(int)(s->pl.pos_x + cos(ang) / 30)]
      [(int)(s->pl.pos_y + sin(ang) / 30)] != 1)
    {
      s->pl.pos_x += cos(ang) / 30;
      s->pl.pos_y += sin(ang) / 30;
      draw_walls(s, s->pl.tab);
    }
  mlx_put_image_to_window(s->d.mlx_pt, s->d.win_pt, s->d.img_pt, 0, 0);
}

void		move_right(t_strct *s)
{
  double        ang;

  ang = s->pl.a * M_PI / 180.0;
  if (s->pl.tab[(int)(s->pl.pos_x + (cos(ang - (M_PI / 2)) / 30))]
      [(int)(s->pl.pos_y + (sin(ang - (M_PI / 2)) / 30))] != 1)
    {
      s->pl.pos_x += cos(ang - (M_PI / 2)) / 30;
      s->pl.pos_y += sin(ang - (M_PI / 2)) / 30;
      draw_walls(s, s->pl.tab);
    }
  mlx_put_image_to_window(s->d.mlx_pt, s->d.win_pt, s->d.img_pt, 0, 0);
}

void		move_down(t_strct *s)
{
  double        ang;

  ang = s->pl.a * M_PI / 180.0;
  if (s->pl.tab[(int)(s->pl.pos_x - cos(ang) / 30)]
      [(int)(s->pl.pos_y - sin(ang) / 30)] != 1)
    {
      s->pl.pos_x -= cos(ang) / 30;
      s->pl.pos_y -= sin(ang) / 30;
      draw_walls(s, s->pl.tab);
    }
  mlx_put_image_to_window(s->d.mlx_pt, s->d.win_pt, s->d.img_pt, 0, 0);
}
