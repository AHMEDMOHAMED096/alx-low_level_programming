#include "main.h"

int print_digit(long n, int base)
{
    int count = 0;
    char symbols[] = "0123456789abcdef";
    if (n < 0)
    {
        write(1, "-", 1);
        return print_digit(n * -1, base) + 1;
    }
    else if (n < base)
    return _putchar(symbols[n]) + 1;
    else
    {
        count = print_digit(n / base , base);
        return count + print_digit(n % base, base);
    }
    
}