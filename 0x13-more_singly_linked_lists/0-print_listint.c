#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to struct listint_t
* Return: return size_t
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

		while (h != NULL)
		{
			if (h == NULL)
			{
			printf("Error\n");
			return (1);
			}
			else
			{
			printf("%d\n", h->n);
			count++;
			h = h->next;
			}
		}
	return (count);
}
