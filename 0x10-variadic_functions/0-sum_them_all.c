#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the number of arguments to be passed
 * Return: return int
 */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0, i;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}
	va_end(args);
	return (result);
}
