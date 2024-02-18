#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: A pointer to hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i = 0;
	char flag = 1;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head != NULL)
		{
			if (flag == 0)
				printf(", ");
			flag = 0;
			printf("'%s': '%s'", head->key, head->value);
			head = head->next;
		}
	}
	printf("}\n");
}
