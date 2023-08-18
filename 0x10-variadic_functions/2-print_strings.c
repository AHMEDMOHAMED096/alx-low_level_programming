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
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char *));
		printf("%s", (separator != NULL && i < n - 1) ? separator : "");
		printf("%s", (s != NULL) ? NULL : "(nil)");
	}
	printf("\n");
	va_end(args);
}
