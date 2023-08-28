#include "lists.h"

/**
* free_list - that frees a listint_t list.
* @head: pointer to struct listint_t
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->n);
		free(head);
		head = temp;
	}

}
