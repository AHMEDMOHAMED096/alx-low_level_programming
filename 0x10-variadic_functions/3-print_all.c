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
	int type = 0;

	while (format[type] != '\0')
{
	switch (format[type])
	{
		case 'c':
		c = va_arg(args, int);
		printf("%c", c);
		break;

		case 'i':
		i = va_arg(args, int);
		printf("%d", i);
		break;

		case 'f':
		f = va_arg(args, double);
		printf("%f", f);
		break;

		case 's':
		s = va_arg(args, char *);
		if (s == NULL)
		{
		printf("(nil)");
		}
		else
		{
		printf("%s", s);
		}
		break;

		default:
		type++;
		break;
	}
	type++;
}
	va_end(args);
	printf("\n");
}
