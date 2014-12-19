/*
** drawing_functions.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Thu Dec 11 10:29:51 2014 cristopher toozs-hobson
** Last update Thu Dec 18 19:01:17 2014 cristopher toozs-hobson
*/

#include "mlx.h"
#include "./sources/include/wolf3D.h"

void            display_rectangle(t_rect r, t_data *d)
{
  int   x;
  int   y;

  x = r.start_x;
  y = r.start_y;
  while (y < (r.size_y + r.start_y))
    {
      while (x < (r.size_x + r.start_x))
        {
          put_pixel_to_image(x, y, d);
          x++;
        }
      y++;
      x = r.start_x;
    }
}

void            colormap(t_data *d, t_pic *p)
{
  t_rect        r;

  r.start_x = p->img_start_x;
  r.start_y = p->img_start_y;
  r.size_x = p->img_size_x;
  r.size_y = p->img_size_y / 2;
  display_rectangle(r, d);
  r.start_x = p->img_start_x;
  r.start_y = p->img_size_y /2;
  d->blue = 30;
  d->green = 75;
  d->red = 110;
  display_rectangle(r, d);
}

void		draw_walls(t_strct *strct, int **tab)
{
  int		column;
  double	half_wall;
  int		y;
  int		n;
  int		i;

  strct->d.blue = 96;
  strct->d.green = 96;
  strct->d.red = 96;
  column = 0;
  y = strct->pic.img_size_y / 2;
  while (column < strct->pic.img_size_x)
    {
      half_wall = set_values(strct, column, tab);
      n = (y + (int)half_wall);
      i = (y - (int)half_wall);
      while (n > i)
	{
	  put_pixel_to_image(column, n, &strct->d);
	  n--;
	}
      column++;
    }
}
