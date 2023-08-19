#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: the number of arguments types to be passed
 */

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	char c;
	int i;
	float f;
	char *s;
	const char *p = format;

	while (*p != '\0')
	{
		if (*p == 'c')
		{
		c = (char)va_arg(args, int);
		printf("%c", c);
		}

		else if (*p == 'i')
		{
		i = va_arg(args, int);
		printf("%d", i);
		}

		else if (*p == 'f')
		{
		f = (float)va_arg(args, double);
		printf("%f", f);
		}

		else if (*p == 's')
		{
		s = va_arg(args, char *);
		if (s == NULL)
		printf("(nil)");
		else
		printf("%s", s);
		}
		p++;
	}
	va_end(args);
	printf("\n");
}
