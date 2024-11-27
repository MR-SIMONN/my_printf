#include "printf.h"

static void  print_hexa(unsigned long long h, int *i)
{
	char    *hexa;

	hexa = "0123456789abcdef";
	if (h >= 16)
		print_hexa(h / 16, i);
	*i += ft_putchar(hexa[h % 16]);
}

int print_adrress(void *p)
{
    int i;

    i = 0;
    i += ft_putstr("0x");
    print_hexa((unsigned long long)p, &i);
    return (i);
}
