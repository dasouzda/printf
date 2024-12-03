#include "ft_printf.h"

void ft_putunsigned_count(unsigned int n, size_t *count)
{
    if (n >= 10)
        ft_putunsigned_count(n / 10, count);
    ft_putchar_count(n % 10 + '0', count); 
}
