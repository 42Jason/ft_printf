# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jason <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/02 15:03:45 by jason             #+#    #+#              #
#    Updated: 2020/06/02 15:12:28 by jason            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	ft_printf.c ft_printf_options.c ft_printf_utils.c

SRCS	=	./libftprintf/
OBJ	=	${SRC:.c=.o}
INC	=	ft_printf.h
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM	=	rm -f
LIBC	=	ar rc
LIBR	=	ranlib
NAME	=	libftprintf.a

all	:	${NAME}

$(NAME)	:	
		${CC} ${CLFAGS} -c -I ${SRCS} ${SRC}
		${LIBC} ${NAME} ${OBJ}
		${LIBR} ${NAME}

clean	:
		${RM} ${OBJ}

fclean	:	clean
		${RM} ${NAME}

re	:	fclean all

norm	:
		norminette -R CheckForbiddenSourceHeader */*.[ch]

.PHONY	:	norm re fclean clean all .c.o
