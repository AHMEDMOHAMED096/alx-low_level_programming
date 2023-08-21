#ifndef MAIN_H
#define MAIN_H

#define BUFF_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_hexa(long n, int base, char caseSpecifier);
int print_digit(long n, int base);
int print_str(char *str);

#endif /* MAIN_H */

