#include "printf.h"

int	ft_putstr(char *s)
{
	int	i;
    int len;

	i = 0;
    len = 0;
	while (s[i])
		len += ft_putchar(s[i++]);
    return (len);
}