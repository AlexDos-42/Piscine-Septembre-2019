# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alesanto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/17 21:09:26 by alesanto          #+#    #+#              #
#    Updated: 2019/09/17 21:09:31 by alesanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= src/main.c src/ft_hexdump.c src/ft_str.c

OBJS		= ${SRCS:.c=.o}

INCLUDES	= include

CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror -I${INCLUDES}

EXE			= ft_hexdump

all:		${EXE}

${EXE}:		${OBJS}
	gcc ${CFLAGS} -o ${EXE} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${EXE}

.PHONY:		all clean fclean
