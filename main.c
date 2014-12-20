/*
** wolf3D.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Wed Dec 10 17:51:02 2014 cristopher toozs-hobson
** Last update Sat Dec 20 21:06:57 2014 cristopher toozs-hobson
*/

#include <stdlib.h>
#include "mlx.h"
#include "./sources/include/wolf3D.h"
#include "./sources/include/my.h"

int		initialize_structs(t_strct *strct, char **av)
{
  t_data	*d;
  t_pic		*p;

  d = &strct->d;
  p = &strct->pic;
  p->win_x = 800;
  p->win_y = 600;
  if ((d->mlx_pt = mlx_init()) == NULL)
    return (1);
  d->img_pt = mlx_new_image(d->mlx_pt, p->win_x, p->win_y);
  d->data = mlx_get_data_addr(d->img_pt, &d->bpp, &d->line, &d->endian);
  d->win_pt = mlx_new_window(d->mlx_pt, p->win_x, p->win_y, "3D");
  p->img_start_x = 0;
  p->img_start_y = 0;
  p->img_x = p->win_x;
  p->img_y = p->win_y;
  strct->arg = av;
  return (0);
}

int		manage_events(t_strct *strct)
{
  t_data	*d;

  d = &strct->d;
  mlx_key_hook(d->win_pt, &manage_key, (void *)(strct));
  mlx_mouse_hook(d->win_pt, &manage_mouse, (void *)(d));
  mlx_expose_hook(d->win_pt, &manage_expose, (void *)(d));
  return (0);
}

int		main(int ac, char **av)
{
  t_strct	s;

  if (ac > 1)
    {
      if (initialize_structs(&s, av) == 1)
	  return (1);
      s.pl.tab = make_tab(&s);
      draw_walls(&s, s.pl.tab);
      mlx_put_image_to_window(s.d.mlx_pt, s.d.win_pt, s.d.img_pt, 0, 0);
      manage_events(&s);
      mlx_loop(s.d.mlx_pt);
    }
  else
    my_putstr("No map in parameters\n");
  return (0);
}
