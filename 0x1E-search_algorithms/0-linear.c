#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array: The array to be searched in
 * @size: The size of array
 * @value: The value to be searched for
 * Return: The index of value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value Checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
			break;
		}
	}
	return (-1);
}
