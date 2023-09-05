#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: file to be read
* @letters: the number of letters it should read and print
* Return: amount of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_bytes = 0;
	ssize_t total = 0;
	ssize_t write_bytes = 0;
	char *buffer = malloc((letters + 1));

	if (buffer == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
		free(buffer);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
		free(buffer);
	}

	while (read_bytes != '\0')
	{
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes != read_bytes)
		{
			free(buffer);
			return (0);
			close(fd);
		}
		read_bytes = read(fd, buffer, letters);
		total += read_bytes;
	}
	free(buffer);
	close(fd);
	return (total);
}
