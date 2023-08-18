#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @n: the number of strings to be passed
 * @separator: is the string to be printed between strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	char *s = va_arg(args, char *);

	for (i = 0; i < n; i++)
	{
	printf("%s%s", (str != NULL) ? str : "(nil)",
		(separator != NULL && i < n - 1) ? separator : "");
	}
	printf("\n");
	va_end(args);
}
