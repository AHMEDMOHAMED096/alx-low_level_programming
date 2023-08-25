#include "lists.h"

/**
* print_list - prints all the elements of a list_t list.
* @h: pointer to struct list_t
* Return: return size_t
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (h)
		while (h != NULL)
		{
			printf("%s\n", (current->str != NULL) ? current->str : "[0] (nil)\n");
			count++;
			current = current->next;
		}
	return (count);
}
