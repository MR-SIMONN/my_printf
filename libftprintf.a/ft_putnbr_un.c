#include "printf.h"

void	ft_putnbr_un(unsigned int n, int *i)
{
	if (n > 9)
	{
		ft_putnbr_un(n / 10, i);
		ft_putnbr_un(n % 10, i);
	}
	else
		*i += ft_putchar_un(n + '0');
}