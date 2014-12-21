/*
** drawing_functions.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Thu Dec 11 10:29:51 2014 cristopher toozs-hobson
** Last update Sat Dec 20 21:18:57 2014 cristopher toozs-hobson
*/

#include "mlx.h"
#include "./sources/include/wolf3D.h"

int		my_put_sky(int x, t_strct *s, int wallheight)
{
  int		y;

  y = 0;
  s->d.red = 255;
  s->d.green = 75;
  s->d.blue = 0;
  while (y < wallheight)
    {
      put_pixel_to_image(x, y, &s->d, s->pic);
      y++;
    }
  return (y);
}

int		my_put_wall(int x, t_strct *s, int low, int y)
{
  s->d.red = 96;
  s->d.green = 96;
  s->d.blue = 96;
  while (y < low)
    {
      put_pixel_to_image(x, y, &s->d, s->pic);
      y++;
    }
  return (y);
}

int		my_put_floor(int x, t_strct *s, int y)
{
  s->d.red = 110;
  s->d.green = 75;
  s->d.blue = 30;
  while (y < s->pic.img_y)
    {
      put_pixel_to_image(x, y, &s->d, s->pic);
      y++;
    }
  return (y);
}

void		draw_column(int x, t_strct *strct, int height, int low)
{
  int		y;

  y = my_put_sky(x, strct, height);
  y = my_put_wall(x, strct, low, y);
  my_put_floor(x, strct, y);
}

void		draw_walls(t_strct *strct, int **tab)
{
  int		column;
  double	half_wall;
  int		w;
  int		n;
  int		i;

  column = 0;
  w = strct->pic.img_y / 2;
  while (column < strct->pic.img_x)
    {
      half_wall = set_values(strct, column, tab);
      n = (w + (int)half_wall);
      i = (w - (int)half_wall);
      draw_column(column, strct, i, n);
      column++;
    }
}
