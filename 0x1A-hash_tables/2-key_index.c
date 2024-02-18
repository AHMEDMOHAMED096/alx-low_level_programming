#include "hash_tables.h"

/**
 * key_index - A function to gives you the index of a key.
 * @key: The key.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index = 0;

	unsigned long int hash_Key = hash_djb2((unsigned char *)key);

	key_index = hash_Key % size;

	return (key_index);
}
