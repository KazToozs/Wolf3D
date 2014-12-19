/*
** my_put_nbr.c for my_put_nbr in /home/toozs-_c/rendu/Piscine_C_J11/lib/my
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Mon Oct 20 11:16:32 2014 cristopher toozs-hobson
** Last update Wed Dec  3 17:16:36 2014 cristopher toozs-hobson
*/

#include "./my.h"

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  if (nb >= 10)
    {
      my_put_nbr(nb / 10);
    }
  my_putchar(nb % 10 + '0');
  return (0);
}
