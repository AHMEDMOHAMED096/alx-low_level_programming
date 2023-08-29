#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list,
* and returns the head node’s data (n).
* @head: pointer to pointer of head
* Return: return int
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
