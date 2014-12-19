/*
** wolf3D.h for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D/include
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Thu Dec 11 09:39:36 2014 cristopher toozs-hobson
** Last update Thu Dec 18 19:01:31 2014 cristopher toozs-hobson
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
  int		img_size_x;
  int		img_size_y;
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
  double	vect_x;
  double	vect_y;
  double	proj_x;
  double	proj_y;
}		t_play;

typedef struct	s_strct
{
  t_play	play;
  t_data	d;
  t_pic		pic;
  t_rect	rect;
  char		**arg;
}		t_strct;

int             initialize_structs(t_strct *strct, char **av);
void            colormap(t_data *d, t_pic *p);
void            put_pixel_to_image(int pos_x, int pos_y, t_data *d);
void            display_rectangle(t_rect r, t_data *d);
int             manage_expose(void *param);
int             manage_key(int  keycode, void *param);
int             manage_mouse(int button, int x, int y, void *param);
void            draw_walls(t_strct *strct, int **tab);
int             **make_tab(t_strct *strct);
int             list_maker(int fd, t_pars **lines);
int             **put_in_table(t_pars *lines, t_play *p, int decount);
int             list_count(t_pars *list);
int             num_count(char **wordtab);
t_pars          *my_put_in_list(t_pars *chain, char *data);
double          set_values(t_strct *strct, int x, int **tab);

#endif
