/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 05:08:10 by moel-hai          #+#    #+#             */
/*   Updated: 2024/12/01 05:08:11 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

char    ft_skip(char *str, char c, int *i)
{
    while (str[*i] == c)
        (*i)++;
    return (str[*i]);
}

int ft_flags(char *s, int *i, va_list t)
{
    int len;
    char c;
    int nbr = 0;
    len = 0;
    if (s[*i] == '+' && nbr >= 0)
    {
        len += write (1, "+", 1); 
        
    }
    else if (s[*i] == '#' && (s[*i + 1] == 'x' || s[*i + 1] == 'X'))
    {
        c = ft_skip(s, '#', i);
        len += write (1, "0", 1);
        len += write (1, &c, 1);
        len += print_it(c, t);
    }
    else if (s[*i] == ' ' && (s[*i + 1] == 'd' || s[*i + 1] == 'i'))
    {
        len += write (1, " ", 1);
        ft_skip(s, ' ', i);
    }
    return (len);
}
