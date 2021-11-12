#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a list.
 *
 * @h: A pointer to the head node of the list
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	listint_t *new;
	int len = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		exit(98);
	while (h != NULL)
	{
		new = h->next;
		h = new;
		len++;
	}

return (len);
}
