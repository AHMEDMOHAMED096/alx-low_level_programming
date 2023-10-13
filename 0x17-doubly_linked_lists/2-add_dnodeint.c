#include "lists.h"

/**
* add_dnodeint - A function that adds a new node at the beginning of a list.
* @head: A pointer to pointer of head
* @n: The data to be added to node
* Return: The address of the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;
	(*head)->prev = ptr;
	*head = ptr;
	return (ptr);
}
