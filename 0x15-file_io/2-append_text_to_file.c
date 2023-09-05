#include "main.h"
#include <string.h>

/**
* append_text_to_file - appends text at the end of a file
* @filename: the name of the file
* @text_content: is the NULL terminated string to add at the end of the file
* Return: integer
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename != NULL)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
	else
		return (-1);
	}

	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	else
		return (-1);
	}
	close(fd);
	return (1);
}
