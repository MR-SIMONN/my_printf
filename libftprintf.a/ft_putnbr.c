#include "printf.h"

void	ft_putnbr(int n, int *i)
{
    long nbr;

    nbr = n;
    if (nbr < 0)
    {
        *i += ft_putchar('-');
        nbr *= -1;
    }
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, i);
		ft_putnbr(nbr % 10, i);
	}
	else
		*i += ft_putchar(nbr + '0');
}