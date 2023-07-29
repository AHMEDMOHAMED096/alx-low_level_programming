#include <stdio.h>
/**
 * main - Entry point
 *
 * A program to print different possible two digits combinations
 * Return: always return 0
 */
#include <stdio.h>

int main(void)
{
int i, j;
	for (i = 0; i < 10; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
	putchar('0' + i);
	putchar('0' + j);
	if (i != 8)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

