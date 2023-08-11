#include "main.h"

/**
* malloc_checked - allocates memory using malloc.
* @b: the size of memory to print.
* Return: Returns a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *malloc_checked = (void*)malloc(b);

	if (malloc_checked == NULL)
	free (malloc_checked);
	exit (98);
}
