/*
** image_functions.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Wed Dec 10 18:11:57 2014 cristopher toozs-hobson
** Last update Sun Dec 21 20:43:01 2014 cristopher toozs-hobson
*/

#include <stdlib.h>
#include "mlx.h"
#include "./sources/include/wolf3D.h"

void		put_pixel_to_image(int pos_x, int pos_y, t_data *d, t_pic p)
{
  int           x;
  int           y;
  int           tab;

  if (pos_x <= 0 || pos_x >= p.win_x)
    return ;
  if (pos_y <= 0 || pos_y >= p.win_y)
    return ;
  x = pos_x * (d->bpp / 8);
  y = pos_y * ((d->bpp / 8) * (d->line / 4));
  tab = x + y;
  d->data[tab] = d->blue;
  d->data[tab + 1] = d->green;
  d->data[tab + 2] = d->red;
  d->data[tab + 3] = 255;
}
