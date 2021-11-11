#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Prints all of the elements of a list
 *
 * @h: Pointer to the head of the list
 *
 * Return: The number of elements in h
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;
	list_t *next;

	next = malloc(sizeof(list_t));
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		next = h->next;
		h = next;
		len++;
	}
	return (len);
}
