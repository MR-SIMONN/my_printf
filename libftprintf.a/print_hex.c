#include "printf.h"

int print_hex(unsigned int n,char c)
{
    int i;
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
