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
int i, j;
	for (i = 0; i < 100; i++)
	{
	for (j = i + 1; j < 100; j++)
	{
	putchar('0' + i / 10);
	putchar('0' + i % 10);
	putchar(' ');
	putchar('0' + j / 10);
	putchar('0' + j % 10);
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
	}
