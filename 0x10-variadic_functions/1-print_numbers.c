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
		printf("%d", va_arg(args, int));
		printf("%s", (separator != NULL && i < n - 1) ? separator : "");
	}
	va_end(args);
	printf("\n");
}
