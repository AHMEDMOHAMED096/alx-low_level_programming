#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @f: pointer to function.
 * @name: name of the person.
 * Return: returns void
 */

void print_name(char *name, void (*f)(char *))
{
	int i;

	while (name[i] != '\0')
	{
	f(*name[i]);
	_putchar(*name[i]);
	i++;
	}
}
