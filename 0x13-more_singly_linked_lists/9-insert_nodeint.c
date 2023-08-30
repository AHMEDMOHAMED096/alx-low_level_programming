#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to pointer of head
* @idx: is the index of the list where the new node should be added
* @n: data to be stored in the new node
* Return: the address of the new node, or NULL if it failed
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
    return (NULL);
	}

	new_node->data = n;

    if (idx == 0)
	{
    new_node->next = *head;
    *head = new_node;
    return (new_node);
    }

    listint_t *current = *head;
    unsigned int position = 0;

    while (current != NULL && position < idx - 1) 
	{
    position++;
    current = current->next;
    }

    if (current == NULL || position > idx - 1)
	{
    free(new_node);
    return (NULL);
    }

    new_node->next = current->next;
    current->next = new_node;

    return (new_node);
}

