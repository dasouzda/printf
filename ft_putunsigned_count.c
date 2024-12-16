/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:27:15 by dasouzda          #+#    #+#             */
/*   Updated: 2024/12/16 15:27:17 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned_count(unsigned int n, size_t *count)
{
	if (n >= 10)
		ft_putunsigned_count(n / 10, count);
	ft_putchar_count(n % 10 + '0', count);
}
