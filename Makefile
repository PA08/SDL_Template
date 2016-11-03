##
## Makefile for template in /home/papadi_a/work/perso/graphics/SDL_Template
##
## Made by alexis papadimitriou
## Login   <papadi_a@epitech.net>
##
## Started on  Wed Nov  2 20:05:55 2016 alexis papadimitriou
## Last update Thu Nov  3 09:51:25 2016 alexis papadimitriou
##

CC		=	gcc

RM		=	rm -f

CFLAGS		=	-W -Wall -Werror -Wextra -I./include

SRCS		=	srcs/main.c \
			srcs/init/template.c \
			srcs/events/event.c \
			srcs/utils/putpixel.c \
			srcs/utils/getpixel.c \
			srcs/utils/putline.c \
			srcs/utils/putcircle.c \
			srcs/utils/get_color.c \
			srcs/utils/fill.c

LIB		=	-lSDL \
			-lm

OBJS		=	$(SRCS:.c=.o)

NAME		=	SDL_Template

all		:	$(NAME)

$(NAME)		:	$(OBJS)
			$(CC) $(OBJS) $(LIB) -o $(NAME)

clean		:
			$(RM) $(OBJS)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY		:	all clean fclean re
