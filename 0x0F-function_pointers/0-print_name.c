#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @f: pointer to function.
 * @name: name of the person.
 * Return: returns void
 */

void print_name(char *name, void (*f)(char *))
{
		while (*name != '\0')
		f(*name);
		name++;
}
