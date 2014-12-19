##
## Makefile for lib in /home/toozs-_c/ProgElem_test/my_ls_tests/lib_maker
## 
## Made by cristopher toozs-hobson
## Login   <toozs-_c@epitech.net>
## 
## Started on  Thu Nov 27 12:52:28 2014 cristopher toozs-hobson
## Last update Thu Dec 18 10:28:50 2014 cristopher toozs-hobson
##

NAME	=	libmy.a

SRC	=	my_getnbr.c \
		my_put_nbr.c \
		my_putchar.c \
		my_putstr.c \
		get_next_line.c \
		my_str_to_wordtab.c \
		my_strdup.c \
		my_strlen.c \
		my_strcpy.c

COMP	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-W -Wall -Werror  -g

LIB	=	ar -rc libmy.a $(COMP)


all: $(NAME)

$(NAME): lib

lib:	$(COMP)
	$(LIB)
	ranlib libmy.a
	cp libmy.a ../include
	cp my.h ../include

clean:
	rm -f $(COMP)

fclean: clean
	rm -f $(NAME)

re: fclean all
