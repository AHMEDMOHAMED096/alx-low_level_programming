#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: Given number for printing n times table
 */

void print_times_table(int n)
{
	int i = 0, j = 0;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j != n)
				printf("%d, ", j * i);
			else
				printf("%d", j * i);
		}
		printf("\n");
	}
}
