#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table
 * @key: The key of the element
 * @value: The value of the element associated with the key
 * Return: 1 if successful, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *currNode = malloc(sizeof(hash_node_t));
	hash_node_t *tempNode;

	if (!key || !ht || !currNode || strcmp("", key) == 0)
	{
		free(currNode);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	tempNode = ht->array[index];
	currNode->key = strdup(key);
	currNode->value = strdup(value);
	currNode->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = currNode;
	else
	{
		while (tempNode != NULL)
		{
			if (strcmp(key, tempNode->key) == 0)
			{
				free(currNode->key);
				free(tempNode->value);
				tempNode->value = currNode->value;
				free(currNode);
				return (1);
			}
			tempNode = tempNode->next;
		}
		currNode->next = ht->array[index];
		ht->array[index] = currNode;
	}
return (1);
}
