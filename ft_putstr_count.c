#include "ft_printf.h"

void    ft_putstr_count(char *str, size_t *count)
{
    size_t i;

    if(!str)
        return;
    i = 0;
    while(str[i])
    {
        ft_putchar_count(str[i], count);
        i++;   
    }
}