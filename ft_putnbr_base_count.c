/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:25:57 by dasouzda          #+#    #+#             */
/*   Updated: 2025/01/02 13:46:43 by dasouzda         ###   ########.fr       */
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

void	ft_putnbr_base_count(unsigned long nb, char *base, size_t *count)
{
	unsigned long	n;
	unsigned long	size;

	size = (unsigned long)ft_strlen(base);
	n = nb;
	if (n >= size)
		ft_putnbr_base_count(n / size, base, count);
	ft_putchar_count(base[n % size], count);
}
