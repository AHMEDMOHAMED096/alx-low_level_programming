#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 */

void print_all(const char *const format, ...)
{
	va_list args;
	int type = 0;
	char *str;
	char *sep = "";

	va_start(args, format);
	if (format)
	{
		while (format[type] != '\0')
		{
			switch (format[type])
			{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;

			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;

			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;

			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				type++;
				continue;
			}
			sep = ", ";
			type++;
		}
	}
	va_end(args);
	printf("\n");
}
