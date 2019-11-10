# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alesanto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/13 16:46:19 by alesanto          #+#    #+#              #
#    Updated: 2019/09/13 16:46:35 by alesanto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= src/main.c src/ft_util.c src/ft_error.c

NAME		= ft_tail

OBJS		= ${SRCS:.c=.o}

INCLUDES	= include

CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror -I${INCLUDES}

EXE			= ft_tail

all:		${EXE}

${EXE}:		${OBJS}
				gcc ${CFLAGS} -o ${EXE} ${OBJS}

clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${EXE}


re:			fclean all

.PHONY:		all clean fclean re
