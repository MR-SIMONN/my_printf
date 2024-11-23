#include "printf.h"

static int print_it(char c, va_list t)
{
    //still have to do : %p  %x  %X
    int i = 0;
    if (c == 'c')
        i += ft_putchar(va_arg(t, int));
    else if (c == 'd' || c == 'i')
        ft_putnbr(va_arg(t, int), &i);
    else if (c == 's')
        i += ft_putstr(va_arg(t, char*));
    else if (c == 'u')
        ft_putnbr_un(va_arg(t, unsigned int), &i);
    else
        i += ft_putchar(c);
    return (i);
}

int ft_printf(const char *str, ...)
{
    int len;
    int i;
    va_list tracker;
    va_start (tracker, str);
    len = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] == '%' && str[i + 1] == '%')
           len += write (1, "%", 1);
        else if (str[i] == '%')
            len += print_it(str[++i], tracker);
        else
            len += write (1, &str[i], 1);
        i++;
    }
    va_end (tracker);
    return (len);
}
#include <stdio.h>
int main ()
{
    int i = 0;
    i = ft_printf ("simon is %d", -14);
    // printf ("%d", i);
}