#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point to the program
 * add: adds positive numbers.
 * @argc: the number of command line arguments
 * @argv: the command line arguments entered
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int add = 0, i, j;
	char *arg;

for (i = 1; i < argc; i++)
{
	arg = argv[i];
	for (j = 0; arg[j] != '\0'; j++)
	{
		if (!isdigit(arg[j]))
		{
			printf("Error\n");
			return (1);
		}
	}
			if (argc == 1)
			printf("0\n");
			else
			add += atoi(argv[i]);
}
	printf("%d\n", add);

	return (0);
}
