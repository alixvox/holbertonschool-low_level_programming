#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - Prints all the elements of a list.
 *
 * @h: A pointer to the head node of the list
 * Return: The number of elements
 */
size_t print_listint(const listint_t *h)
{
	listint_t *new;
	int len = 0;

	new = malloc(sizeof(listint_t));
	if (!new)
		exit(98);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		new = h->next;
		h = new;
		len++;
	}

return (len);
}
