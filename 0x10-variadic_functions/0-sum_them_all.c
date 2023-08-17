#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of arguments to be passed
 * Return: return int
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	return (0);
	va_list args;

	va_start(args, n);
	int i, sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
