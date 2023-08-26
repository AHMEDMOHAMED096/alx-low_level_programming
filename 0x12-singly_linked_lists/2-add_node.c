#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list.


*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	return (0);
	ptr->str = strdup(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
