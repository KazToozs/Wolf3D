/*
** math_functions.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Wed Dec 17 11:22:06 2014 cristopher toozs-hobson
** Last update Sun Dec 21 19:00:53 2014 cristopher toozs-hobson
*/

#include <math.h>
#include "./sources/include/wolf3D.h"

void		calculate_primes(t_play *pl)
{
  double	ang;

  ang = pl->a * M_PI / 180.0;
  pl->xp = (pl->x1 * cos(ang)) - (pl->y1 * sin(ang));
  pl->yp = (pl->x1 * sin(ang)) + (pl->y1 * cos(ang));
}

double		set_values(t_strct *s, int x, int **tab)
{
  double	xi;
  double	yi;
  double	k;

  s->pl.d = 0.5;
  s->pl.p = 1;
  s->pl.x1 = s->pl.d;
  s->pl.y1 = s->pl.p * (((((double)(s->pic.img_x) / 2) - (double)(x))
			 / (double)(s->pic.img_x)));
  calculate_primes(&s->pl);
  k = 0;
  xi = s->pl.pos_x + (k * (double)s->pl.x1);
  yi = s->pl.pos_y + (k * (double)s->pl.y1);
  while (tab[(int)(xi)][(int)(yi)] != 1)
    {
      k = k + 0.001;
      xi = (s->pl.pos_x) + (k * s->pl.xp);
      yi = (s->pl.pos_y) + (k * s->pl.yp);
    }
  return (((double)(s->pic.img_y)) / (2 * k));
}
