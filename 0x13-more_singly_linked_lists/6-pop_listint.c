#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list,
* and returns the head node’s data (n).
* @head: pointer to pointer of head
* Return: return int
*/

int pop_listint(listint_t **head)
{
	if (*head == NULL)
	return (0);
	else
	{
	listint_t *temp = *head;

	head = head->next;
	free(temp);
	}
	return (*head);
}
