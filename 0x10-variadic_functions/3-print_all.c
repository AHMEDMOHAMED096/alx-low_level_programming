#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 */

void print_all(const char *const format, ...)
{
	va_list args;
	char *s;
	char c;
	float f;
	int type = 0, i;

	va_start(args, format);
	if (format)
	{
		while (format[type] != '\0')
		{
			switch (format[type])
			{
			case 'c':
				printf("%c", va_arg(args, char));
				break;

			case 'i':
				printf("%d", va_arg(args, int));
				break;

			case 'f':
				printf("%f", va_arg(args, float));
				break;

			case 's':
				if (va_arg(args, char *) == NULL)
					printf("(nil)");
				else
					printf("%s", va_arg(args, char *));
				break;
			default:
				type++;
				break;
			}
			type++;
		}
	}
	va_end(args);
	printf("\n");
}
