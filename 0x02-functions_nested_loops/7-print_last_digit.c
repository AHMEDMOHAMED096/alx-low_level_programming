#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	printf("%d", n%10);
	return (n % 10);
}

