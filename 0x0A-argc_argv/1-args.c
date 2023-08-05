#include <stdio.h>
/**
 * main - entry point to the program
 * args: prints the number of arguments passed into it.
 * @argc: the number of command line arguments
 * @argv: the command line arguments entered
 * Return: always 0
 */

int main(int argc, char *argv[])

{
	(void) argv;
	printf("%d\n", argc-1);
        return (0);
}
