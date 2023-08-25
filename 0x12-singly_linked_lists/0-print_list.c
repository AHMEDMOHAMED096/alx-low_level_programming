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
			printf("%s\n", h->str != NULL ? h->str : "[0] (nil)\n");
			count++;
			h = h->next;
		}
	return (count);
}
