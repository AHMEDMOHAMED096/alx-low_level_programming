#include "lists.h"

/**
* delete_dnodeint_at_index - A function that deletes
* the node at index index of a list.
* @head: pointer to pointer of dlistint_t list
* @index: the index of the node that should be deleted
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = current->next;
	if (current->next != NULL)
		current->next->prev = temp;
	free(current);
	return (1);
}
