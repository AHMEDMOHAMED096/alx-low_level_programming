#include "main.h"

/**
 * _print_rev_recursion- prints a string in reverse
 * @s: is the string to be printed
 * Return void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')

	{
	_putchar ('\n');
	}
	else
	{

	_puts_recursion(s + 1);
	_putchar (*s);
	}
}
