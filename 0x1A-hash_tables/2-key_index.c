#include "hash_tables.h"

/**
 * key_index - Finds the index of a key
 * @key: The key
 * @size: The size of the hash table
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int address = hash_djb2(key);
	unsigned long int index = address % size;

	return (index);
}