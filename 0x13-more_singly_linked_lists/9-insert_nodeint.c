#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a certain index in a list.
 *
 * @head: A reference to a pointer of the head node.
 * @idx: The index at which to insert the new node.
 * @n: The data of the new node.
 * Return: A pointer to the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *prevNode = *head;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);
	while (i < idx - 1)
	{
		if (prevNode == NULL)
			return (NULL);
		prevNode = prevNode->next;
		i++;
	}
	printf("%d", prevNode->n);
	newNode->n = n;
	newNode->next = prevNode->next;
	prevNode->next = newNode;
return (newNode);
}
