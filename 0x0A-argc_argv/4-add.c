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
	char *j;

if (argc == 1)
printf("0\n");

while (*j != '\0')
{
	j = argv[i];
	for (i = 1; i < argc; i++)
	{
		if (*j < '0' || *j > '9')
		{	
		printf("Error\n");
		return (1);
		}
		else
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
}
	return (0);
}
