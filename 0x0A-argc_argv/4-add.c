#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to the program
 * add: adds positive numbers.
 * @argc: the number of command line arguments
 * @argv: the command line arguments entered
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, add = 0;
	char j[30];

for (i = 1; i < argc; i++)
{
		j[30] = argv[i];
		while (j[30] != '\0')
		{
		if (j[30] < '0' || j[30] > '9')
		{
		printf("Error\n");
		return (1);
		}
		else if (argc == 1)
		printf("0\n");
		else
		add += atoi(argv[i]);
		}
}
	printf("%d\n", add);

	return (0);
}
