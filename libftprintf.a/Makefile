# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 23:46:53 by moel-hai          #+#    #+#              #
#    Updated: 2024/11/23 01:04:10 by moel-hai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_putchar.c ft_putnbr_un.c ft_putnbr.c ft_putstr.c
OBJS = ${SRCS:.c=.o}

NAME = printf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB = ar rc
RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}

%.o: %.c printf.h
	${CC} ${CFLAGS} $< -o $@
	@${LIB} ${NAME} $@
clean:
	${RM} {OBJS}

fclean: clean
	${RM} ${NAME}
re: fclean all
.phony: clean