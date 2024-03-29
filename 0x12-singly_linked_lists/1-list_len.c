#include "lists.h"

/**
* list_len - returns the number of elements in a linked list_t list.
* @h: pointer to struct list_t
* Return: return size_t
*/

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
