# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 23:46:53 by moel-hai          #+#    #+#              #
#    Updated: 2024/12/02 18:50:22 by moel-hai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_putchar.c ft_putnbr_un.c ft_putnbr.c ft_putstr.c\
print_address.c print_hex.c ft_flags.c
OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB = ar rc
RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${LIB} $@ $^

%.o: %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@

clean:
	@${RM} ${OBJS}
bonus : all
fclean: clean
	@${RM} ${NAME}
re: fclean all
.phony: clean