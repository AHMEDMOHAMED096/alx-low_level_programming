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
	int write_text;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	
	if (text_content != NULL)
	{
	write_text = write(fd, text_content, strlen(text_content));
		if (write_text == -1)
		{
		close(fd);
		return (-1);
		}
	else
	return (1);
	}
	close(fd);
	return (1);
}
