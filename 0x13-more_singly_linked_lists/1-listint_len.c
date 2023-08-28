#include "lists.h"

/**
* listint_len - returns the number of elements in a linked list_t list.
* @h: pointer to struct list_t
* Return: return size_t
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
