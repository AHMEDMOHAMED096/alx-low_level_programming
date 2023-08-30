#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list.
* @head: the head of first node
* @index: index of the node 
* Return: pointer to the node we want
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int position = 0;

	while (current != index)
	{
		if (position == index)
		{
		return (current);
		}
		position++;
		current = current->next;
	}
	return (NULL);
}
