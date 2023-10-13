#include "lists.h"

/**
* sum_dlistint - A function that returns the sum of all the data (n) of a list.
* @head: A pointer to dlistint_t list
* Return: the sum of data
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
