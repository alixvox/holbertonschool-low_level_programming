#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: The hash table
 * Return: Void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *currNode;
	hash_node_t *tempNode;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		currNode = ht->array[i];
		while (currNode != NULL)
		{
			tempNode = currNode;
			currNode = tempNode->next;
			free(tempNode->key);
			free(tempNode->value);
			free(tempNode);
		}
	}
	free(ht->array);
	free(ht);
}