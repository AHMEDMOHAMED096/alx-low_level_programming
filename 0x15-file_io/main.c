#include "main.h"

/**
 * main - check the code
 * @ac: the number of command line arguments
 * @av: the command line arguments to be passed
 * Return: Always 0
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(av[1], av[2]);
	return (0);
}
