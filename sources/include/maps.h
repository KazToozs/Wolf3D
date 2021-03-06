/*
** maps.h for wolf3D in /home/toozs-_c/ProgElem_test/wolf_3D/sources/include
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Sun Dec 21 17:50:03 2014 cristopher toozs-hobson
** Last update Sun Dec 21 20:16:25 2014 cristopher toozs-hobson
*/

#ifndef MAPS_H_
#define MAPS_H_

 int           g_map_one[7][7] =
   {
     {1, 1, 1, 1, 1, 1, 1},
     {1, 0, 0, 0, 0, 0, 1},
     {1, 0, 0, 0, 0, 0, 1},
     {1, 0, 0, 0, 0, 0, 1},
     {1, 0, 0, 0, 0, 0, 1},
     {1, 0, 0, 0, 0, 0, 1},
     {1, 1, 1, 1, 1, 1, 1}
   };

 int           g_map_two[9][15] =
   {
     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
     {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
     {1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1},
     {1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1},
     {1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1},
     {1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 1},
     {1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 1, 1},
     {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1},
     {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
   };

int           g_map_three[6][6] =
    {
      {1, 1, 1, 1, 1, 1},
      {1, 0, 0, 0, 0, 1},
      {1, 0, 0, 0, 1, 1},
      {1, 0, 0, 1, 0, 1},
      {1, 0, 0, 0, 0, 1},
      {1, 1, 1, 1, 1, 1}
    };

#endif
