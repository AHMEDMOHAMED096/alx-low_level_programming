#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index index
* @head: pointer to pointer of the head
* @index: the index of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL || head == NULL)
	{
		return (-1);
	}

	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int position = 0;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL && position < index)
	{
		position++;
		previous = current;
		current = current->next;
	}

	if (current == NULL || position > index)
	{
		return (-1);
	}

	previous->next = current->next;
	free(current);
	return (1);
}
