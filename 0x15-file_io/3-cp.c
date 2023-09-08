#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - check the code
 * @argc: the number of command line arguments
 * @argv: the command line arguments to be passed
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int from;
	int to;
	int close_file;
	ssize_t read_bytes = 0;
	ssize_t write_bytes = 0;
	char *buffer = malloc(char * BUFFER_SIZE);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	read_bytes = read(from, buffer, BUFFER_SIZE);

	if (buffer == NULL || read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	write_bytes = write(to, buffer, read_bytes);
	if (write_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	free(buffer);
	close_file = close(to);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
