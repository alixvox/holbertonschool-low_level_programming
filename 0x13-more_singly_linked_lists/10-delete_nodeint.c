#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node from a list at index
 *
 * @head: A reference to a pointer to the head node
 * @index: The index at which to remove a node
 *
 * Return: 1 if successful, -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delNode = *head;
	listint_t *prevNode = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (*head == NULL || !delNode || !prevNode)
		return (-1);
	if (index == 0)
	{
		*head = delNode->next;
		free(delNode);
		return (1);
	}
	while (i < index)
	{
		if (delNode == NULL)
			return (-1);
		prevNode = delNode;
		delNode = delNode->next;
		i++;
	}
	prevNode->next = delNode->next;
	free(delNode);
return (1);
}
