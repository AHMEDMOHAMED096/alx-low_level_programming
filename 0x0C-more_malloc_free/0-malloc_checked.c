<<<<<<< HEAD
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
	exit(98);
	return (fun);
}
=======
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
	exit(98);
	return (fun);
}
>>>>>>> 42a486cb3fe5334ad08ea1acacf72aec9b4933ec
