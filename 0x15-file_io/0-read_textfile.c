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
	int read_letters = 0;
	int total = 0;
	int write_letters = 0;
	char *buffer = malloc((letters + 1));

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	read_letters = read(fd, buffer, letters);
	while (read_letters > 0)
	{
		buffer[read_letters] = '\0';
	write_letters = write(1, buffer, read_letters);
	if (write_letters < read_letters)
	{
		return (0);
		close(fd);
	}
		total += read_letters;
		letters_read = read(fd, buffer, letters);
	}
	free(buffer);
	close(fd);
	return (total);
}
