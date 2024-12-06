/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 00:54:48 by moel-hai          #+#    #+#             */
/*   Updated: 2024/12/05 01:44:21 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	print_hex(unsigned int n, char c)
{
	int		i;
	char	*hexa;

	i = 0;
	if (c == 'x')
		hexa = "0123456789abcdef";
	else
		hexa = "0123456789ABCDEF";
	if (n >= 16)
		i += print_hex(n / 16, c);
	i += ft_putchar(hexa[n % 16]);
	return (i);
}
