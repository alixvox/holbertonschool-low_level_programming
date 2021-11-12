#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 *
 * @head: A pointer to the head node
 * @index: The index of the list
 *
 * Return: A pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nthNode;
	unsigned int i = 0;

	nthNode = malloc(sizeof(listint_t));
	if (!nthNode)
		exit(98);
	while (i < index)
	{
		nthNode = head->next;
		head = nthNode;
		i++;
	}

return (nthNode);
}
