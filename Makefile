##
## Makefile for makefile_test_minilibx in /home/toozs-_c/iGraph_test/tests
## 
## Made by cristopher toozs-hobson
## Login   <toozs-_c@epitech.net>
## 
## Started on  Wed Oct 29 15:09:44 2014 cristopher toozs-hobson
## Last update Wed Dec 17 22:35:02 2014 cristopher toozs-hobson
##

SRC	=	main.c \
		drawing_functions.c \
		image_functions.c \
		event_functions.c \
		math_functions.c \
		parsing_functions.c 

NAME	=	wolf3D

CC	=	gcc

COMP	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(COMP)
	$(CC) -W -Wall -g3 -o $(NAME) $(SRC) -L./sources/include/ -lmy -lm -L/usr/lib64/X11 -lmlx -lXext -lX11

clean: 
	rm -f $(COMP)

fclean: clean
	rm -f $(NAME)

re: fclean all
