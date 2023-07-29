#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always return 0
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
if (i != 89)
{
putchar('0' + i);
putchar('0' + j);
putchar(',');
putchar(' ');
}
}

}
return (0);

}
