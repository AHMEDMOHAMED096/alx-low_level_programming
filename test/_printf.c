#include "main.h"


int _printf(const char *format, ...)
{
	int count = 0;

	va_list ap;

	va_start(ap, format);

	while (*format != '\0')
	{
		switch(*format)
		{
			case '%':
			* ++format;
			break;

			case 'c':
			_putchar(va_arg(ap, int));
					count++;
					break;
			case 's':
			while (char *s != '\0')
			_putchar(va_arg(ap, char *));
					count++;
					break;
			default:
			count++;
			break;
		}
		* foramt++;
	}
	va_end(ap);
	return (count);

}
