#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: the character to be checked
 * Return: 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	int i;

	i = islower(c);
	while (i)
	{
		_putchar(i + '0');
		return (1);
	}
	_putchar('\n');
	return (0);
}



