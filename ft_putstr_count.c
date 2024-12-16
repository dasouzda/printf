/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:26:00 by dasouzda          #+#    #+#             */
/*   Updated: 2024/12/16 15:37:38 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_count(char *str, size_t *count)
{
	size_t	i;

	if (!str)
	{
		ft_putstr_count("(null)", count);
		return ;
	}
	i = 0;
	while (str[i])
	{
		ft_putchar_count(str[i], count);
		i++;
	}
}
