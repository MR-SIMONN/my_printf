/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 00:54:41 by moel-hai          #+#    #+#             */
/*   Updated: 2024/12/05 01:44:14 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_putstr(char *s)
{
	int	i;
	int	len;

	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	i = 0;
	len = 0;
	while (s[i])
		len += write (1, &s[i++], 1);
	return (len);
}
