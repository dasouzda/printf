#include "ft_printf.h"

void    ft_putstr_count(char *str, size_t *count)
{
    size_t i;

    if(!str)
    {
        ft_putstr_count("(null)", count);
        return;
    }
    i = 0;
    while(str[i])
    {
        ft_putchar_count(str[i], count);
        i++;   
    }
}