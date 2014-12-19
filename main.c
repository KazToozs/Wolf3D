/*
** wolf3D.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Wed Dec 10 17:51:02 2014 cristopher toozs-hobson
** Last update Fri Dec 19 18:24:03 2014 cristopher toozs-hobson
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
  d->mlx_pt = mlx_init();
  d->img_pt = mlx_new_image(d->mlx_pt, p->win_x, p->win_y);
  d->data = mlx_get_data_addr(d->img_pt, &d->bpp, &d->line, &d->endian);
  d->win_pt = mlx_new_window(d->mlx_pt, p->win_x, p->win_y, "3D");
  d->red = 255;
  d->green = 75;
  d->blue = 0;
  p->img_start_x = 0;
  p->img_start_y = 0;
  p->img_size_x = p->win_x;
  p->img_size_y = p->win_y;
  strct->arg = av;
  return (0);
}

int		manage_events(t_strct strct)
{
  t_data	*d;

  d = &strct.d;
  mlx_key_hook(d->win_pt, &manage_key, (void *)(d));
  mlx_mouse_hook(d->win_pt, &manage_mouse,(void *)(d));
  mlx_expose_hook(d->win_pt, &manage_expose, (void *)(d));
  return (0);
}

int		main(int ac, char **av)
{
  t_strct	s;
  int		**tab;

  if (ac > 1)
    {
      initialize_structs(&s, av);
      colormap(&s.d, &s.pic);
      tab = make_tab(&s);
      draw_walls(&s, tab);
      mlx_put_image_to_window(s.d.mlx_pt, s.d.win_pt, s.d.img_pt, 0, 0);
      manage_events(s);
      mlx_loop(s.d.mlx_pt);
    }
  else
    my_putstr("No map in parameters\n");
  return (0);
}
