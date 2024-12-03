#include "ft_printf.h"
void    ft_conversion(va_list arg, char *format, size_t *count)
{
    if(*format == 'c')
        ft_putchar_count(va_arg(arg, int), count);
    else if (*format == 's')
        ft_putstr_count(va_arg(arg, char *), count);
    else if (*format == 'p')
        ft_putptr_count(va_arg(arg, void *), count);
    else if (*format == 'i' || *format == 'd')
        ft_putnbr_count(va_arg(arg, int), count);
    else if (*format == 'u')
		ft_putunsigned_count(va_arg(arg, unsigned int), count);
    else if(*format == 'x')
        ft_putnbr_base_count(va_arg(arg, unsigned int), "0123456789abcdef", count);
    else if(*format == 'X')
        ft_putnbr_base_count(va_arg(arg, unsigned int), "0123456789ABCDEF", count);
    else if (*format == '%')
        ft_putchar_count(*format, count);
}

int ft_printf(const char *format, ...)
{
    va_list arg;
    size_t count;

    if(!format)
        return(0);
    count = 0;
    va_start(arg, format);
    while(*format)
    {
        if (*format  == '%')
        {
            format++;
            ft_conversion(arg, (char *)format, &count);
        }
        else
            ft_putchar_count(*format, &count);
        format++;
    }
    va_end(arg);
    return(count);
}
