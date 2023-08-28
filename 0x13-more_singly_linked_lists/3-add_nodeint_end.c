#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list.
* @head: a pointer to pointer of head
* @n: integer to be printed
* Return: return the address of the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	return (0);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	*head = ptr;
	else
	{
		listint_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (*head);
}
