#include "lists.h"

/**
* free_dlistint - A function that frees a dlistint_t list.
* @head: A pointer to dlistint_t
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->prev);
		head = ptr;
	}
	free(ptr);
}
