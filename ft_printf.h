/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasouzda <dasouzda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:26:07 by dasouzda          #+#    #+#             */
/*   Updated: 2025/01/02 12:57:42 by dasouzda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
void	ft_putchar_count(char c, size_t *count);
void	ft_putstr_count(char *str, size_t *count);
void	ft_putptr_count(void *ptr, size_t *count);
void	ft_putnbr_base_count(unsigned long nb, char *base, size_t *count);
void	ft_putnbr_count(int n, size_t *count);
void	ft_putunsigned_count(unsigned int n, size_t *count);

#endif