#include "lists.h"

/**
* free_list - that frees a list_t list.
*/

void free_list(list_t *head)
{
    list_t *temp;
    while (head != NULL)
    {
        temp = head->next;
        free(head);
        head = temp;
    }

}