#include "lists.h"

/**
* insert_dnodeint_at_index - A function that inserts a new node
* at a given position.
* @h: A pointer to pointer of dlistint_t list
* @idx: Is the index of the list where the new node should be added
* @n: Data to be stored in the new node
* Return: The address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node;
	dlistint_t *temp = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || h == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			if (temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}
	free(new_node);
	return (NULL);
}
