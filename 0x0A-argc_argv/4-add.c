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
	int add = 0;
	char *c;

for (c = argv[argc]; *c < argc; c++)
{
	while (*c != '\0')
	{
		if (argc == 1)
		{
		printf("0\n");
		}
		else if (*c < '0' || *c > '9')
		{
		printf("Error\n");
		return (1);
		}
		else
		{
		add += atoi(argv[i]);
		}
	}
}
	printf("%d\n", add);

	return (0);
}
