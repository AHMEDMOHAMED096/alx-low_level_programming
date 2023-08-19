#include "main.h"


int _printf(const char *format, ...)
{
	int count = 0;

	va_list ap;

	va_start(ap, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch(*format)
			{
				case 'd':
				{
				int i = va_arg(ap, format);
				_putchar(i);
				count++;
				break;
				}
				case 'c':
				{
				int c = va_arg(ap, int);
				_putchar(c);
				count++;
				break;
				}
				case 's':
				{
				char *s = va_arg(ap, char *);
				while (*s != '\0')
				{
				_putchar(*s);
				s++;
				count++;
				}
				break;
				}

				default:
				_putchar(*format);
				count++;
				break;
			}
		}
		else
		{
		putchar(*format);
		count++;
		}
		foramt++;
	}
	va_end(ap);
	return (count);

}
