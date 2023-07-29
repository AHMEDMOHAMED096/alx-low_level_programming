#include <stdio.h>
/**
 * main - Entry point
 *
 * A program to print all possible combinations of two two-digit numbers
 * Return: always return 0
 */
#include <stdio.h>

int main(void)
	{
int i, j, n, k;
	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{
	for (n = 0; n < 10; n++)
	{
	for (k = n + 1; k < 10; k++)
	{
	putchar('0' + i);
	putchar('0' + j);
	putchar(' ');
	putchar('0' + n);
	putchar('0' + k);
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
	}
