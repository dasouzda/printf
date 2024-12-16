/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:25:55 by dasouzda          #+#    #+#             */
/*   Updated: 2024/12/16 15:53:24 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_count(void *ptr, size_t *count)
{
	unsigned long	adress;

	adress = (unsigned long)ptr;
	ft_putstr_count("0x", count);
	if (!adress)
	{
		ft_putchar_count('0', count);
		return ;
	}
	ft_putnbr_base_count(adress, "0123456789abcdef", count);
}
