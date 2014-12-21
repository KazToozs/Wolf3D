/*
** wolf3D.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Wed Dec 10 17:51:02 2014 cristopher toozs-hobson
** Last update Sun Dec 21 20:42:31 2014 cristopher toozs-hobson
*/

#include <stdlib.h>
#include "mlx.h"
#include "./sources/include/wolf3D.h"
#include "./sources/include/my.h"

int		**maps(char **av, t_strct *s)
{
  if (my_getnbr(av[1]) == 1)
    return (static_one(s));
  else if (my_getnbr(av[1]) == 2)
    return (static_two(s));
  else if (my_getnbr(av[1]) == 3)
    return (static_three(s));
  else
    {
      my_putstr("Input number 1, 2 or 3 to select map\n");
      return (NULL);
    }
}

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

int		wolf(t_strct *s)
{
  manage_events(s);
  mlx_hook(s->d.win_pt, 2, 3, &manage_key, (void *)(s));
  mlx_loop(s->d.mlx_pt);
  return (0);
}

int		main(int ac, char **av)
{
  t_strct	s;

  if (ac > 1)
    {
      if (initialize_structs(&s, av) == 1)
	return (1);
      if ((s.pl.tab = maps(av, &s)) == NULL)
	return (0);
      else
	{
	  s.pl.a = 90;
	  draw_walls(&s, s.pl.tab);
	  mlx_put_image_to_window(s.d.mlx_pt, s.d.win_pt, s.d.img_pt, 0, 0);
	  wolf(&s);
	}
    }
  else
    my_putstr("No map in parameters\n");
  return (0);
}
