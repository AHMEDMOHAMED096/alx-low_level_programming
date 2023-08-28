#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to struct list_t
* Return: return size_t
*/

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
