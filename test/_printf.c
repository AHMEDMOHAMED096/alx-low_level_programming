#include "main.h"

int print_format(char spec, va_list ap)
{
    int count = 0;
    
    if (spec == 'c')
    count += _putchar(va_arg(ap, int));
    else if (spec == 's')
    count += print_str(va_arg(ap, char *));
    else if (spec == 'i' || spec == 'd')
    count += print_digit((long)(va_arg(ap, int)), 10);
    else if(spec == 'x')
    count += print_hexa((long)(va_arg(ap, unsigned int)), 16, 'x');
    else if(spec == 'X')
    count += print_hexa((long)(va_arg(ap, unsigned int)), 16, 'X');
	else if (spec == 'u')
    count += print_digit((long)(va_arg(ap, unsigned int)), 10);
    else if (spec == 'o')
    count += print_digit((long)(va_arg(ap, unsigned int)), 8);
    else if (spec == 'p')
    {
    count += write(1, "0x", 2);
    count += print_digit((long)(va_arg(ap, void *)), 16);
    }
    else if (spec == 'b')
    count += print_digit((long)(va_arg(ap, void *)), 2);
    else if (spec == '%')
    count += _putchar('%');
    else 
    count += write(1, &spec, 1);
    return count;
}


int _printf(const char *format, ...)
{
    va_list ap;
    int count = 0;
    int i = 0;
    const char validspec[] = "diouxXfsbpc%";
    va_start(ap, format);
    
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            if (format[i + 1] != '\0')
            {
                int valid_spec = 0;
                unsigned int j = 0;
                for (j = 0; j < sizeof(validspec) - 1; j++)
                {
                    if (format[i + 1] == validspec[j])
                    {
                        valid_spec = 1;
                        break;
                    }
                }
                
                if (valid_spec)
                {
                    count += print_format(format[i + 1], ap);
                    i++;
                }
                else
                {
                    count += write(1, &format[i + 1], 1);
                }
            }
        }
        else
        count += write(1, &format[i], 1);
        i++;
    }
    
    va_end(ap);
    return count;
}


