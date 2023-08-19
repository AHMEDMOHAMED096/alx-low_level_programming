#include "main.h"

int _printf(const char *format, ...)
{
	int count = 0;

	va_list ap;

	va_start(ap, format);

	while (*format)
	{
		if (*format =='%')
		{
			format++;

			switch(*format)
			{
				case '%':
				_putchar('%');
				count++;
				break;

				case 'd':
				{
				if ('d' || 'i' == *format)
					{
					int i = va_arg(ap, int);
					_putchar(i);
					}
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
					while (*s)
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
		format++;
	}
	va_end(ap);
	return (count);

}