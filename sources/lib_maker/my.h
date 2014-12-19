/*
** my.h for my_h in /home/toozs-_c/rendu/Piscine_C_J09/include
** 
** Made by cristopher toozs-hobson
** Login   <toozs-_c@epitech.net>
** 
** Started on  Fri Oct 10 14:21:53 2014 cristopher toozs-hobson
** Last update Mon Dec 15 20:28:23 2014 cristopher toozs-hobson
*/

#ifndef LIB_MY_
# define LIB_MY_

int		my_getnbr(char *str);
int		my_put_nbr(int nb);
void		my_putchar(char c);
void		my_putstr(char *str);
char            *get_next_line(const int fd);
char		*my_strdup(char *str);
char		*my_strcpy(char *dest, char *src);
int		my_strlen(char *str);
char		**my_str_to_wordtab(char *str);
int		my_getnbr(char *str);

#endif
