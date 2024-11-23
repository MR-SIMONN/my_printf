#include "printf.h"

void	ft_putnbr_un(unsigned int n, int *i)
{
	if (n > 9)
	{
		ft_putnbr(n / 10, i);
		ft_putnbr(n % 10, i);
	}
	else
		*i += ft_putchar(n + '0');
}