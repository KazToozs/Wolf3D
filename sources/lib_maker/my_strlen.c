/*
** my_strlen.c for my_strlen in /home/toozs-_c/rendu/Piscine_C_J04
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Tue Oct  7 11:38:57 2014 cristopher toozs-hobson
** Last update Wed Oct  8 12:31:09 2014 cristopher toozs-hobson
*/

int	my_strlen(char *str)
{
  int	n;

  n = 0;
  while (str[n] != '\0')
    {
      n++;
    }
  return (n);
}
