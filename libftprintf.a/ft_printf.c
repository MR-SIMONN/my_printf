#include "printf.h"

static int print_it(char c, char r, va_list t)
{
    int i = 0;
    if (c == 'c')
        i += ft_putchar(va_arg(t, int));
    else if (c == 'd' || c == 'i')
        ft_putnbr(va_arg(t, int), &i);
    else if (c == 's')
        i += ft_putstr(va_arg(t, char*));
    else if (c == 'u')
        ft_putnbr_un(va_arg(t, unsigned int), &i);
    else if (c == 'x' || c == 'X')
        i += print_hex(va_arg(t, unsigned int), c);
    else if (c == 'p')
        i += print_adrress(va_arg(t, void *));
    else if (r == '%' && c != '%')
    {
        i += ft_putchar(r);
        i += ft_putchar(c);
    }
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
    if (!str)
        return (-1);
    if (write (1, 0, 0) == -1)
        return (-1);
    len = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] == '%' && str[i + 1] == '%')
           len += write (1, "%", 1);
        else if (str[i] == '%')
            len += print_it(str[++i], str[i], tracker);
        else
            len += write (1, &str[i], 1);
        i++;
    }
    va_end (tracker);
    if (len < 0)
        len = -1;
    return (len);
}
// #include <stdio.h>
// int main ()
// {
//     int i = 0;
//     int *ptr = &i;
//     i = ft_printf ("simon is %p\n%s\n", ptr, "yooo whatup");
//     printf ("%d\n", i);
//     i = printf ("simon is %p\n%s\n", ptr, "yooo whatup");
//     printf ("%d\n", i);
//     i = ft_printf (" %r %%%");
//     printf ("\n");
//      i = ft_printf (NULL);
//     printf ("\n");
//     printf ("%d\n", i);
//     printf ("\n");
//     i = ft_printf ("simon is %%  \nbama%s\n", "hey");
//     printf ("%d\n", i);
//     i = ft_printf (NULL, "hey");
//     printf ("%d\n", i);
// }
