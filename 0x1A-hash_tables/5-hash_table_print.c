#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 * Return: Void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int x = 0;
	
	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (x == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			x = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
