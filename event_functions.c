/*
** event_functions.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Thu Dec 11 10:10:27 2014 cristopher toozs-hobson
** Last update Sun Dec 21 20:42:01 2014 cristopher toozs-hobson
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
  t_strct        *s;

  s = (t_strct *)(param);
  if (keycode == 65361)
    move_left(s);
  else if (keycode == 65362)
    move_up(s);
  else if (keycode == 65363)
    move_right(s);
  else if (keycode == 65364)
    move_down(s);
  else if (keycode == 100)
    turn_left(s);
  else if (keycode == 113)
    turn_right(s);
  else if (keycode == 65307)
    exit(0);
  else
    return (0);
  return (1);
}

int             manage_mouse(void *param)
{
  t_data        *d;

  d = (t_data *)(param);
  mlx_put_image_to_window(d->mlx_pt, d->win_pt, d->img_pt, 0, 0);
  return (0);
}
