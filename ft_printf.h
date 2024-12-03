#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

int ft_printf(const char *format, ...);
void    ft_putchar_count(char c, size_t *count);
void    ft_putstr_count(char *str, size_t *count);
void    ft_putptr_count(void *ptr, size_t *count);
void     ft_putnbr_base_count(int nb, char *base, size_t *count);
void	ft_putnbr_count(int n,size_t *count);
void ft_putunsigned_count(unsigned int n, size_t *count);

#endif