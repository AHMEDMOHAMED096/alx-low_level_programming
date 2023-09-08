#include "main.h"
#define BUFFER_SIZE 1024
void cp_file(const char *file_from, const char *file_to);

/**
 * main - check the code
 * @ac: the number of command line arguments
 * @av: the command line arguments to be passed
 * Return: Always 0
 */

int main(int argc, char **argv[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(argv[1], argv[2]);
	return (0);
}

/**
* cp_file - copies the content of a file to another file
* @file_from: the file to print from it
* @file_to: the file to print to it
*/

void cp_file(const char *file_from, const char *file_to)
{
	int from;
	int to;
	int close_file;
	ssize_t read_bytes = 0;
	ssize_t write_bytes = 0;
	char *buffer = malloc(BUFFER_SIZE);

	from = open(argv[1], O_RDONLY);
	read_bytes = read(from, buffer, BUFFER_SIZE);

	if (file_from == NULL || buffer == NULL || read_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	write_bytes = write(to, buffer, read_bytes);
	if (file_to == NULL || write_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	free(buffer);
	close_file = close(fd);
	if (close_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
