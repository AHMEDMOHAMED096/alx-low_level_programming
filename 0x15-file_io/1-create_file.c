#include "main.h"
#include <string.h>

/**
* create_file - creates a file
* @filename: the name of the file to create
* @text_content: is a NULL terminated string to write to the file
* Return: integer
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int write_text;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0500);
	if (fd == -1)
	{
		write(fd, "fails", 5);
		return (-1);
	}

	if (text_content != NULL)
	{
	write_text = write(fd, text_content, strlen(text_content));
		if (write_text == -1)
		{
		close(fd);
		return (-1);
		}
	}
	close(fd);
	return (1);
}
