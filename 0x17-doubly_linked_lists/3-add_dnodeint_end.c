#include "lists.h"

/**
* add_dnodeint_end - A function that adds a new node at the end of a list.
* @head: A pointer to pointer dlistint_t
* @n: The data to be added to node
* Return: The address of the new element
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		dlistint_t *ptr = *head;

		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
		new_node->prev = ptr;
	}
	return (*head);
}
