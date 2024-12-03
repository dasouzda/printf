#include "ft_printf.h"

void    ft_putptr_count(void *ptr, size_t *count)
{
    char *str;
    unsigned long adress;

    adress = (unsigned long)ptr;
    ft_putstr_count("0x", count);
    if (!ptr)
    {
        ft_putchar_count('0', count);
        return;
    }
    ft_putnbr_base_count((unsigned long)ptr, "0123456789abcdef", count);
}