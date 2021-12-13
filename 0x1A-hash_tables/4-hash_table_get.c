#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key.
 *
 * @ht: The hash table
 * @key: The key to use to find the value
 * Return: The value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (!ht)
		return (NULL);
	node = ht->array[key_index((const unsigned char *)key, ht->size)];
	while (node)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
return (NULL);
}
