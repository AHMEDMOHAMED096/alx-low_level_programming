#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: A pointer to hash table.
 * @key: The hash key
 * @value: The value to be added.
 *
 * Return: 1 on success, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int Key_index;
	hash_node_t *head, *new_node;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	Key_index = key_index((unsigned char *)key, ht->size);
	head = ht->array[Key_index];

	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{

			free(head->value);

			head->value = strdup(value);

			return (1);
		}

		head = head->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node);

		return (0);
	}

	new_node->next = ht->array[Key_index];
	ht->array[Key_index] = new_node;
	return (1);
}
