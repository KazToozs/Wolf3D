/*
** event_functions.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Thu Dec 11 10:10:27 2014 cristopher toozs-hobson
** Last update Sat Dec 20 15:51:21 2014 cristopher toozs-hobson
*/

#include <stdlib.h>
#include "mlx.h"
#include "./sources/include/wolf3D.h"
#include "./sources/include/my.h"

int             manage_expose(void *param)
{
  t_data        *d;

  d = (t_data *)(param);
  mlx_put_image_to_window(d->mlx_pt, d->win_pt, d->img_pt, 0, 0);
  return (0);
}

int             manage_key(int  keycode, void *param)
{
  t_data        *d;

  d = (t_data *)(param);
  my_put_nbr(keycode);
  my_putchar('\n');
  if (keycode == 65307)
    exit(0);
  mlx_put_image_to_window(d->mlx_pt, d->win_pt, d->img_pt, 0, 0);
  return (0);
}

int             manage_mouse(int button, int x, int y, void *param)
{
  t_data        *d;

  d = (t_data *)(param);
  my_putstr("x: ");
  my_put_nbr(x);
  my_putchar('\n');
  my_putstr("y: ");
  my_put_nbr(y);
  my_putchar('\n');
  my_putstr("bouton: ");
  my_put_nbr(button);
  my_putchar('\n');
  mlx_put_image_to_window(d->mlx_pt, d->win_pt, d->img_pt, 0, 0);
  return (0);
}
