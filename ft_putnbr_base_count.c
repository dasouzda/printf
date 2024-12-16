/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:25:57 by dasouzda          #+#    #+#             */
/*   Updated: 2024/12/16 16:40:04 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base_count(int nb, char *base, size_t *count)
{
	long	n;
	int		size;

	size = ft_strlen(base);
	n = nb;
    if(n == INT_MIN)
    {
        ft_putstr_count("-2147483648", count);
        return ;
    }
	if (n < 0)
	{
		ft_putchar_count('-', count);
		n = -n;
	}
	if (n > size - 1)
	{
		ft_putnbr_base_count(n / size, base, count);
		ft_putnbr_base_count(n % size, base, count);
	}
	if (n <= size - 1)
	{
		ft_putchar_count(base[n], count);
	}
}
