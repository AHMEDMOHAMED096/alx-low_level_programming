#include "hash_tables.h"

/**
* hash_table_create - A function to create a hash table.
* @size: The size of array of pointers to linked lists first node.
* Return: A pointer to newly created hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash_table_ptr = NULL;
	hash_node_t *head = NULL;

	hash_table_ptr = malloc(sizeof(hash_table_t));
	if (hash_table_ptr == NULL)
	{
		free(hash_table_ptr);
		return (NULL);
	}

	hash_table_ptr->array = malloc(size * sizeof(head));
	if (hash_table_ptr->array == NULL)
	{
		free(hash_table_ptr);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		hash_table_ptr->array[i] = NULL;
	}

	hash_table_ptr->size = size;

	return (hash_table_ptr);
}
