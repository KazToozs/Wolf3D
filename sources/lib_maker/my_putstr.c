/*
** my_putstr.c for my_putstr in /home/toozs-_c/ProgElem_test/push_swap_tests/lib_maker
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Thu Dec  4 11:12:29 2014 cristopher toozs-hobson
** Last update Thu Dec  4 11:16:32 2014 cristopher toozs-hobson
*/

#include "./my.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
