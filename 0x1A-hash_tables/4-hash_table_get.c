#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: A pointer to hash table.
 * @key: The hash key.
 *
 * Return: The value associated with the key.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head;
	char *Value;
	unsigned long int Key_index;

	if (!ht || !key || !*key)
		return (NULL);

	Key_index = key_index((unsigned char *)key, ht->size);
	head = ht->array[Key_index];

	while (head != NULL)
	{
		if (strcmp(key, head->key) == 0)
		{
			Value = head->value;
			return (Value);
		}
		head = head->next;
	}
	return (NULL);
}
