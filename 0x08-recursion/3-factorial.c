#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the given number
 *
 * Return:return integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (factorial = n * factorial(n - 1));
}
