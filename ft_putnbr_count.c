#include "ft_printf.h"

void	ft_putnbr_count(int n,size_t *count)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_count('-', count);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr_count(nb / 10, count);
	ft_putchar_count(nb % 10 + 48, count);
}