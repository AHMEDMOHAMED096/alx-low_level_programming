#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to pointer of head
* @idx: is the index of the list where the new node should be added
* @n: data to be inserted at a given position
* Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = head;
	listint_t *current;

	current->n = n;
	current->next = NULL;
	unsigned int position = 0;

	while (ptr != NULL)
	{
		if (position == idx)
		{
			current->next = ptr->next;
			ptr->next = current;
		}
		position++;
		current = current->next;
	}
	return (NULL);
}
