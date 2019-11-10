# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alesanto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 23:11:11 by alesanto          #+#    #+#              #
#    Updated: 2019/09/14 17:04:39 by alesanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	=	${wildcard *.c}

OBJS	=	${SRCS:.c=.o}

CFLAGS	=	-Wall -Wextra -Werror

CC		=	gcc

NAME	=	rush-02

.c.o	:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} :	all

all		:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean	:
			rm -f ${OBJS}

fclean	:	clean
			rm -f ${NAME}

re		:	fclean all

.PHONY	:	all clean fclean re 
