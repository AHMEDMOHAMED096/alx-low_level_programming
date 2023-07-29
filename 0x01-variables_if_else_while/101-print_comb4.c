#include <stdio.h>
/**
 * main - Entry point
 *
 * A program to print different possible three digits combinations
 * Return: always return 0
 */
#include <stdio.h>

int main(void)
{
int i, j, n;
	for (i = 0; i < 10; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
    for (n = j + 1; n < 10; n++)
    {
	putchar('0' + i);
	putchar('0' + j);
	putchar('0' + n);
	if (i != 7)
	{
	putchar(',');
	putchar(' ');
    }
	}
	}
	}
	putchar('\n');
	return (0);
}
