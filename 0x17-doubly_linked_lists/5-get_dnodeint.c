#include "lists.h"

/**
* get_dnodeint_at_index - A function that returns the nth node of a linked list.
* @head: A pointer to dlistint_t
* @index: Index of the node
* Return: A pointer to the node we want
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int pos = 0;

	while (ptr != NULL)
	{
		if (pos == index)
		{
			return (ptr);
		}
		pos++;
		ptr = ptr->next;
	}
	return (NULL);
}
