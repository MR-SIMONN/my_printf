/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 00:53:59 by moel-hai          #+#    #+#             */
/*   Updated: 2024/12/03 04:21:59 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_it(char c, va_list t)
{
	int	i;

	i = 0;
	if (c == 'c')
		i += ft_putchar(va_arg(t, int));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(t, int), &i);
	else if (c == 's')
		i += ft_putstr(va_arg(t, char *));
	else if (c == 'u')
		ft_putnbr_un(va_arg(t, unsigned int), &i);
	else if (c == 'x' || c == 'X')
		i += print_hex(va_arg(t, unsigned int), c);
	else if (c == 'p')
		i += print_address(va_arg(t, void *));
	else
		i += ft_putchar (c);
	return (i);
}

int	ft_check(char c)
{
	return (c == 'c' || c == 's' || c == 'd' || c == 'i'
		|| c == 'x' || c == 'X' || c == 'p' || c == 'u');
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	tracker;

	va_start (tracker, str);
	(1) && (len = 0, i = 0);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			if (str[++i] == '%')
				len += write(1, "%", 1);
			if (str[i] == '#' || str[i] == '+' || str[i] == ' ')
				len += ft_flags((char *)str, &i);
			if (ft_check(str[i]))
				len += print_it(str[i], tracker);
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end (tracker);
	return (len);
}