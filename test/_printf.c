#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#define BUFFER_SIZE 1024
#include <limits.h>

int print_char(int c)
{
    return write(1, &c, 1);
}

int print_str(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
    print_char((int)*str);
    ++count;
    ++str;
    }
    return count;
}


int print_digit(long n, int base)
{
    int count = 0;
	char symbols[] = "0123456789abcdef";
    if (n < 0)
    {
        write(1, "-", 1);
        return print_digit(n * - 1, base) + 1;
    }
    else if (n < base)
    return print_char(symbols[n]) + 1;
    else
    {
        count = print_digit(n / base , base);
        return count + print_digit(n % base, base);
    }
    
}



int print_format(char spec, va_list ap)
{
    int count = 0;
    
    if (spec == 'c')
    count += print_char(va_arg(ap, int));
    else if (spec == 's')
    count += print_str(va_arg(ap, char *));
    else if (spec == 'i' || spec == 'd')
    count += print_digit((long)(va_arg(ap, int)), 10);
    else if(spec == 'x')
    count += print_digit((long)(va_arg(ap, unsigned int)), 16);
	else if (spec == 'u')
    count += print_digit((long)(va_arg(ap, unsigned int)), 10);
    else if (spec == 'o')
    count += print_digit((long)(va_arg(ap, unsigned int)), 8);
    else if (spec == 'p')
    count += print_digit((long)(va_arg(ap, void *)), 16);
    else if (spec == '%')
    count += print_char('%');
	else if (spec == 'r')
	count += print_char('r');
    else 
    count += write(1, &spec, 1);
    return count;
}



int _printf(const char *format, ...)
{
    va_list ap;
    int count;
    va_start(ap, format);
    count = 0;
    while (*format != '\0')
    {
        if (*format == '%')
        count += print_format(*(++format), ap);
        count += write(1, format, 1);
        ++format;
    }
    va_end(ap);
    return count;
}

