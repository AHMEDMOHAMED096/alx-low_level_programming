#include "main.h"

int _printf(const char *format, ...) {
  int count = 0;
  va_list args;
  va_start(args, format);

  while (*format) {
    if (*format == '%') {
      format++;
      switch (*format) {
        case 'c': {
          char c = va_arg(args, int);
          putchar(c);
          count++;
          break;
        }
        case 's': {
          char *s = va_arg(args, char *);
          int len = strlen(s);
          write(1, s, len);
          count += len;
          break;
        }
        case '%': {
          putchar('%');
          count++;
          break;
        }
        case 'd': {
          int i = va_arg(args, int);
          char buf[32];
          sprintf(buf, "%d", i);
          write(1, buf, strlen(buf));
          count += strlen(buf);
          break;
        }
        case 'i': {
          int i = va_arg(args, int);
          char buf[32];
          sprintf(buf, "%i", i);
          write(1, buf, strlen(buf));
          count += strlen(buf);
          break;
        }
		
        }
        default:
          count++;
          break;
      }
    } else {
      putchar(*format);
      count++;
    }
    format++;
  }

  va_end(args);
  return count;
}
