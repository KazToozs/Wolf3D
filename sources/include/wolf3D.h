/*
** wolf3D.h for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D/include
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Thu Dec 11 09:39:36 2014 cristopher toozs-hobson
** Last update Sun Dec 21 19:02:51 2014 cristopher toozs-hobson
*/

#ifndef WOLF_H_
#define WOLF_H_

typedef struct	s_data
{
  void		*mlx_pt;
  void		*img_pt;
  void		*win_pt;
  char		*data;
  int		endian;
  int		line;
  int		bpp;
  int		red;
  int		green;
  int		blue;
}		t_data;

typedef struct	s_rect
{
  int		start_x;
  int		start_y;
  int		size_x;
  int		size_y;
}		t_rect;

typedef struct	s_pic
{
  int		win_x;
  int		win_y;
  int		img_start_x;
  int		img_start_y;
  int		img_x;
  int		img_y;
}		t_pic;

typedef struct	s_pars
{
  char		*line;
  struct s_pars	*next;
}		t_pars;

typedef struct	s_play
{
  double	pos_x;
  double	pos_y;
  double	d;
  double	p;
  double	x1;
  double	y1;
  double	xp;
  double	yp;
  double      	a;
  int		**tab;
}		t_play;

typedef struct	s_strct
{
  t_play	pl;
  t_data	d;
  t_pic		pic;
  t_rect	rect;
  char		**arg;
}		t_strct;

int             initialize_structs(t_strct *strct, char **av);
void            put_pixel_to_image(int pos_x, int pos_y, t_data *d, t_pic p);
int             manage_expose(void *param);
int             manage_key(int  keycode, void *param);
int             manage_mouse(void *param);
void            draw_walls(t_strct *strct, int **tab);
double          set_values(t_strct *strct, int x, int **tab);
void		move_left(t_strct *s);
void		move_right(t_strct *s);
void		move_up(t_strct *s);
void		move_down(t_strct *s);
void		turn_left(t_strct *s);
void		turn_right(t_strct *s);
int             **static_one(t_strct *s);
int             **static_two(t_strct *s);
int             **static_three(t_strct *s);
int             **create_map(int x_max, int y_max, int map);

#endif
