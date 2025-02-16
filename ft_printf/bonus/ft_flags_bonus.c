/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 05:08:10 by moel-hai          #+#    #+#             */
/*   Updated: 2024/12/05 01:43:24 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

char	ft_skip(char *str, char c, int *i)
{
	while (str[*i] == c)
		(*i)++;
	return (str[*i]);
}

int	ft_space_case(char *str, char c, int *i, va_list tr)
{
	char	flag;
	int		len;

	flag = ft_skip(str, c, i);
	len = 0;
	if (flag != 'd' && flag != 'i')
		return (len);
	if (va_arg(tr, int) >= 0)
		len += write (1, &c, 1);
	return (len);
}

int	ft_flags(char *s, int *i, va_list t)
{
	int		len;
	char	c;

	len = 0;
	if (s[*i] == '+')
	{
		c = ft_skip(s, '+', i);
		if (c != 'd' && c != 'i')
			return (len);
		if (va_arg(t, int) >= 0)
			len += write (1, "+", 1);
	}
	else if (s[*i] == '#')
	{
		c = ft_skip(s, '#', i);
		if (c != 'x' && c != 'X')
			return (len);
		if (va_arg(t, int) == 0)
			return (len);
		len += write (1, "0", 1);
		len += write (1, &c, 1);
	}
	else if (s[*i] == ' ')
		len += ft_space_case(s, ' ', i, t);
	return (len);
}
