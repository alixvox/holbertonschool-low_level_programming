#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - Prints all of the elements of a list
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;
	list_t *next;

	next = malloc(sizeof(list_t));
	while (h != NULL)
	{
		next = h->next;
		h = next;
		len++;
	}
	return (len);
}
