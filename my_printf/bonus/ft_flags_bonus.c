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


int	ft_flags(char *s, int *i, va_list t)
{
	int		len;
	char	c;
	char si;

	len = 0;
	if (s[*i] == '+' || s[*i] == ' ')
	{
		si = s[*i];
		c = ft_skip(s, si, i);
		if (c != 'd' && c != 'i')
			return (len);
		if (va_arg(t, int) >= 0)
			len += write (1, &si, 1);
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
	return (len);
}
