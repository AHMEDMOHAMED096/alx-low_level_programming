#include "main.h"

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
	int read_bytes;
	int write_bytes;
	char *buffer = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	read_bytes = read(from, buffer, 1024);

	if (read_bytes < 0 || argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	write_bytes = write(to, buffer, read_bytes);
	if (write_bytes == -1 || argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close_file = close(to);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	free(buffer);
	close(to);
	return (0);
}
