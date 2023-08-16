#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @f: pointer to function prints a string
 * @name: name of the person.
 * Return: returns void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
	else
	return (void);
}
