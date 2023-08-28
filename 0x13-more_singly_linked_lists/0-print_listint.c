#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to struct list_t
* Return: return size_t
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

		while (h != NULL)
		{
			if (h->n == NULL)
			return (0);
			else
			{
			printf("%d\n", h->n);
			h = h->next;
			count++;
			}
		}
	return (count);
}
