# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alesanto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 16:52:43 by alesanto          #+#    #+#              #
#    Updated: 2019/09/13 19:14:42 by alesanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = main.c

OBJS    = ${SRCS:.c=.o}

NAME    =  ft_cat

CC      = gcc

RM      = rm -f

CFLAGS  = -Wall -Wextra -Werror

.c.o:
	                    ${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:    ${OBJS}
	                        ${CC} ${CFLAGS} -o  ${NAME} ${OBJS}

all:        ${NAME}

clean:
		${RM} ${OBJS}

fclean:     clean
		${RM} ${NAME}

re:         fclean all

.PHONY:		all clean fclean re
