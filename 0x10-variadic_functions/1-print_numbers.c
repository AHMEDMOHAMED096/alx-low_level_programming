#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: the number of integers to be passed
 * @separator: is the string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		return;
		printf("%s%d\n", *separator, va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
