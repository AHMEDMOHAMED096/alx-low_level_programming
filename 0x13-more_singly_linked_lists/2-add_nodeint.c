#include "lists.h"

/**
* add_node - adds a new node at the beginning of a listint_t list.
* @head: a pointer to pointer of head
* @n: integer to be printed
* Return: return the address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	return (0);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
