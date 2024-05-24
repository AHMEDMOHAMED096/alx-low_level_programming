#include "search_algos.h"

/**
 * binary_search_recurssive - a binary search function using recurssion
 * @array: The array to be searched in
 * @lt: The left portion of array
 * @rt: The right portion of array
 * @value: The value to be searched for
 * Return: The index of value
 */

int binary_search_recurssive(int *array, size_t lt, size_t rt, int value)
{
	size_t i, mid;

	if (lt <= rt)
	{
		mid = (rt + lt) / 2;
		printf("Searching in array: ");
		for (i = lt; i <= rt; i++)
		{
			printf("%d", array[i]);
			if (i != rt)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			return (binary_search_recurssive(array, mid + 1, rt, value));
		else
			return (binary_search_recurssive(array, lt, mid - 1, value));
	}
	return (-1);
}

/**
 * binary_search - function that searches for a value in a sorted array of ints
 * @array: The array to be searched in
 * @size: The size of array
 * @value: The value to be searched for
 * Return: The index of value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t rt, lt;

	rt = size - 1;
	lt = 0;

	if (array == NULL)
		return (-1);

	return (binary_search_recurssive(array, lt, rt, value));
}
