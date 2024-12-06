# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 23:46:53 by moel-hai          #+#    #+#              #
#    Updated: 2024/12/06 04:27:25 by moel-hai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c ft_putchar.c ft_putnbr_un.c ft_putnbr.c ft_putstr.c\
print_address.c print_hex.c
BSRCS = bonus/ft_printf_bonus.c bonus/ft_putchar_bonus.c bonus/ft_putnbr_un_bonus.c bonus/ft_putnbr_bonus.c\
bonus/ft_putstr_bonus.c bonus/print_address_bonus.c bonus/print_hex_bonus.c bonus/ft_flags_bonus.c
OBJS = ${SRCS:.c=.o}
BOBJS = ${BSRCS:.c=.o}

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB = ar rc
RM = rm -f

all: ${NAME}

${NAME}: ${OBJS}
	${LIB} $@ $^
bonus: ${BOBJS}
	${LIB} ${NAME} $^

%.o: %.c ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@

bonus/%.o: bonus/%.c bonus/ft_printf_bonus.h
	${CC} ${CFLAGS} -c $< -o $@

clean:
	@${RM} ${OBJS} ${BOBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: clean bonus