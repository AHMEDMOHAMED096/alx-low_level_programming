#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: an array for searching
 * @size: the number of elements in the array
 * @cmp: a pointer to function to be used for compare
 * Return: return an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && cmp)
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
