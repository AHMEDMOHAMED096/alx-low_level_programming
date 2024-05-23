#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of ints
 * @array: The array to be searched in
 * @size: The size of array
 * @value: The value to be searched for
 * Return: The index of value
 */

int binary_search(int *array, size_t size, int value)
{
	int pivot;
	size_t i;

	if (size == 0 || array == NULL)
		return (-1);

	pivot = size / 2;

	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
	if (array[pivot] == value)
		return (pivot);
	else if (array[pivot] < value)
	{
		int result;

		result = (binary_search(array + pivot + 1, size - pivot - 1, value));
		if (result == -1)
			return (-1);
		else
			return (pivot + result + 1);
	}
	else
		return (binary_search(array, pivot, value));
}
