#include "main.h"

/**
* malloc_checked - allocates memory using malloc.
* @b: the size of memory to print.
* Return: Returns a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *fun = malloc(b);

	if (fun == NULL)
	free (fun);
	return &(void);
}
