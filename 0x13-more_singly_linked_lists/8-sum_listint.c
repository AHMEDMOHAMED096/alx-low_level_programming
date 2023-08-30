#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list.
* Return: the sum of all data 
*/

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;
	
	if (head == NULL)
		return;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
