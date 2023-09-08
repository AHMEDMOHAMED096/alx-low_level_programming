#include "main.h"
#define BUFFER_SIZE 1024

/**
* main - entry point
* cp_file - copies the content of a file to another file
* @file_from: the file to print from it
* @file_to: the file to print to it
*/

void cp_file(const char *file_from, const char *file_to);
int main(ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(av[1], av[2]);
	return (0);
}

void cp_file(const char *file_from, const char *file_to)
{
	int fd;
	int fd2;
	int close_file;
	ssize_t read_bytes = 0;
	ssize_t write_bytes = 0;
	char *buffer = malloc(BUFFER_SIZE);
	fd2 = open(file_from, WRONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	
	read_bytes = read(fd2, buffer, BUFFER_SIZE);

	if (file_from == NULL || buffer == NULL || read_bytes == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd = open("file_to", WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	
	write_bytes = write(fd, buffer, read_bytes);
	if (file_to == NULL || write_bytes == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	free(buffer);
	close_file = close(fd);
	if (close_file == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
