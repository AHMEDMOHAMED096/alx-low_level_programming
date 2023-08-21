#include "main.h"

int print_str(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
    _putchar((int)*str);
    ++count;
    ++str;
    }
    return count;
}