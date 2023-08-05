#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to the program
 * mul: multiplies two numbers.
 * @argc: the number of command line arguments
 * @argv: the command line arguments entered
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, multi = 0;

	if (argc < 3)
	{
	printf("Error\n");
	return (1);
	}
	for (i = 1; i < argc; i++)
	{
	multi = atoi(argv[1]);
	}
	multi = multi * atoi(argv[2]);
	printf("%d\n", multi);
	return (0);
}
