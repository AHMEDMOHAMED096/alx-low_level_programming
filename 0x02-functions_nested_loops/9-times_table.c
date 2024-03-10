#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int n1, n2, result = 0;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			result = n1 * n2;
			printf("%d", result);
			if (n2 < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
				_putchar('$');
		}
		_putchar('\n');
	}
}
