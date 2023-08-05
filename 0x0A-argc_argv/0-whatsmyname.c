#include <stdio.h>

/**
 * main - entry point to the program
 * whatsmyname: prints its name, followed by a new line.
 * @argc: the number of command line arguments
 * @argv: the command line arguments entered
 * Return: always 0
 */

int main(int argc, char *argv[])

{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
