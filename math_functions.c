/*
** math_functions.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Wed Dec 17 11:22:06 2014 cristopher toozs-hobson
** Last update Thu Dec 18 22:49:54 2014 cristopher toozs-hobson
*/

#include <math.h>
#include "./sources/include/wolf3D.h"

// may be unessecary
/* double		calculate_angle(t_pic pic, t_play play, int x) */
/* { */
/*   double	pow_d; */
/*   double	pow_y; */
/*   double	adj; */
/*   double	hypo; */

/*   pow_d = pow(play.d, 2); */
/*   pow_y = pow(((pic.img_size_x - x) / pic.img_size_x), 2); */
/*   hypo = sqrt(pow_y + (play.p * pow_y)); */
/*   adj = play.d; */
/*   return (acos(adj/hypo)); */
/* } */

void		calculate_vector(t_play *play, t_pic pic, int x)
{
  play->proj_x = play->d + play->pos_x;  
  play->proj_y = play->p * ((((double)(pic.img_size_x) / 2) - (double)(x)) / (double)(pic.img_size_x)) + play->pos_y;
  play->vect_x = sqrt(pow(play->proj_x - play->pos_x, 2));
  play->vect_y = sqrt(pow(play->proj_y - play->pos_y, 2));
}

double		set_values(t_strct *strct, int x, int **tab)
{
  t_pic		pic;
  t_play	*play;
  /* int		xi; */
  /* int		yi; */
  double	xi;
  double	yi;
  double	k;

  play = &strct->play;
  pic = strct->pic;
  play->d = 0.5;
  play->p = 1;
  calculate_vector(play, pic, x);
  /* xi = (int)(play.pos_x + play.vect_x); */
  /* yi = (int)(play.pos_y + play.vect_y); */
  xi = (play->pos_x + play->vect_x);
  yi = (play->pos_y + play->vect_y);
  k = 1;
  while (tab[(int)xi][(int)yi] != 1)
    {
      k = k + 0.1;
      xi = (double)(play->pos_x) + (k * play->vect_x);
      yi = (double)(play->pos_y) + (k * play->vect_y);
    }
  /* printf("%f", k); */
  return ((double)(pic.img_size_y) / (2 * k));
}

