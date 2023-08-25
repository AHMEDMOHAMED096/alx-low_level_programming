#include "lists.h"

/**
* print_list - prints all the elements of a list_t list.
* @h: pointer to struct list_t
* Return: return size_t
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

		while (h != NULL)
		{
			if (h->str == NULL)
			printf("[0] (nil)\n");
			else
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}
	return (count);
}
