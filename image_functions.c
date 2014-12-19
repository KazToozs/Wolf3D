/*
** image_functions.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Wed Dec 10 18:11:57 2014 cristopher toozs-hobson
** Last update Thu Dec 18 14:09:45 2014 cristopher toozs-hobson
*/

#include <stdlib.h>
#include "mlx.h"
#include "./sources/include/wolf3D.h"

void		put_pixel_to_image(int pos_x, int pos_y, t_data *d)
{
  int           x;
  int           y;
  int           tab;

  x = pos_x * (d->bpp / 8);
  y = pos_y * ((d->bpp / 8) * (d->line / 4));
  tab = x + y;
  d->data[tab] = d->blue;
  d->data[tab + 1] = d->green;
  d->data[tab + 2] = d->red;
  d->data[tab + 3] = 255;
}
