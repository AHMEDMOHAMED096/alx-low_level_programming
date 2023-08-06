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
	int i, add = 0;
	char *num;

for (i = 1; i < argc; i++)
{
	*num = argv[i];
		if (isdigit(num))
		add += atoi(argv[i]);
		else if (argc == 1)
		printf("0\n");
		else
		{
		printf("Error\n");
		return (1);
		}	
}
	printf("%d\n", add);

	return (0);
}
