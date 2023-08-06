#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point to the program
 * add: adds positive numbers.
 * @argc: the number of command line arguments
 * @argv: the command line arguments entered
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, add = 0, count;
	char j[30];

for (i = 1; i < argc; i++)
{
		count = strlen(j);
		count = atoi(argv[i]);
		while (count != '\0')
		{
		if (count < '0' || count > '9')
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
