#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: file to be read 
* @letters: the number of letters it should read and print
* Return: amount of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int *fd = open(filename, O_RDWR);
	char *s = malloc(letters);
	char *buffer = s;
	int count = 0;

	if (fd == NULL || filename == NULL)
		return (0);

	read(fd, buffer, sizeof(filename));

	for (int i = 0; filename[i] != '\0'; i++)
	{
		buffer[count] = filename[i];
		buffer[++count]; 
	}
	write(1, filename, sizeof(filename));
	free(s);
	close(fd);
	return (count);
}
