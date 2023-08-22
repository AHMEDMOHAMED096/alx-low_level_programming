#include "main.h"
/**
* print_str - prints string to stdout
* @count: detects number of characters to be printed on stdout
* @str: the string to be printed
* return: return int
*/

int print_str(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
	_putchar((int)*str);
	++count;
	++str;
	}
	return (count);
}