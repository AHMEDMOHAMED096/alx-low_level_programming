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
	char *buffer = malloc(letters);

	if (buffer == NULL)
	{
		return (0);
	}

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);

	read_bytes = read(fd, buffer, letters);
	if (read_bytes < 0)
		return (0);

	while (read_bytes != 0)
	{
		if (letters > read_bytes)
			return (total);
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
		if (write_bytes == -1 || write_bytes < read_bytes)
		{
			return (0);
			close(fd);
		}
		total += read_bytes;
		read_bytes = read(fd, buffer, letters);
	}
	free(buffer);
	close(fd);
	return (total);
}
