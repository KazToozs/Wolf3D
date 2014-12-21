/*
** parsing_functions2.c for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Sun Dec 21 17:25:31 2014 cristopher toozs-hobson
** Last update Sun Dec 21 18:56:57 2014 cristopher toozs-hobson
*/

#include <stdlib.h>
#include "./sources/include/wolf3D.h"
#include "./sources/include/maps.h"

int		**create_map(int x_max, int y_max, int map)
{
  int           **tab;
  int           x;
  int           y;

  x = 0;
  y = 0;
  tab = malloc(sizeof(int *) * (y_max + 1));
  while (y < y_max)
    {
      tab[y] = malloc(sizeof(int) * (x_max + 1));
      while (x < x_max)
        {
	  tab[y][x] = (map == 1) ? g_map_one[y][x] : tab[y][x];
	  tab[y][x] = (map == 2) ? g_map_two[y][x] : tab[y][x];
	  tab[y][x] = (map == 3) ? g_map_three[y][x] : tab[y][x];
          x++;
        }
      tab[y][x] = '\0';
      y++;
      x = 0;
    }
  tab[y] = NULL;
  return (tab);
}
