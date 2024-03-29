#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each
 * element of an array.
 * @array: the array given as parameter
 * @size: the size of the array
 * @action: is the pointer to function to use
 * Return: return void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
