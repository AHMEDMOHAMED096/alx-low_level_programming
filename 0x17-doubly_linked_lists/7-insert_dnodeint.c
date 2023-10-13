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
	dlistint_t *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
		temp = temp->next;
	}
	return (NULL);
}
