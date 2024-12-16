/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:26:46 by dasouzda          #+#    #+#             */
/*   Updated: 2024/12/16 16:08:21 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_count(int n, size_t *count)
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
