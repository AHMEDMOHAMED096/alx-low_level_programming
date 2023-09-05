#include "main.h"

/**
* create_file - creates a file
* @filename: the name of the file to create
* @text_content: is a NULL terminated string to write to the file
* Return: integer
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	fd = open(filename, O_WRONLY | O_CREAT);

	if (fp == -1)
		return (-1);

	
}