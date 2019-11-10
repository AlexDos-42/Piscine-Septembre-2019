# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alesanto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/12 19:33:14 by alesanto          #+#    #+#              #
#    Updated: 2019/09/13 14:46:27 by alesanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	do-op

SRCS		=	srcs/lib.c		\
			srcs/opperations.c	\
			srcs/main.c		\

OBJ		=	$(SRCS:.c=.o) 

CFLAGS		=	-Wall -Wextra -Werror -I./Includes

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)


clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
