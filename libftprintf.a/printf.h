# ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int ft_printf(const char *, ...);
int	ft_putchar(char c);
void	ft_putnbr(int n, int *i);
void	ft_putnbr_un(unsigned int n, int *i);
int	ft_putstr(char *s);
int print_hex(unsigned int n, char c);
int print_adrress(void *p);

#endif
