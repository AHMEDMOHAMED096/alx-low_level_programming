#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: a pointer to pointer of head
* @str: string to be printed
* Return: return the address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	size_t len = strlen(str);

	if (ptr == NULL)
	return (0);
	ptr->str = strndup(str, len);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
