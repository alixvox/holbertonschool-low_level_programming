#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a list.
 *
 * @head: The first node of the list
 * @index: The nth node to delete
 * Return: 1 on success, or -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prevNode, *nextNode;
	dlistint_t *currNode = *head;
	unsigned int i;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		nextNode = currNode->next;
		if (nextNode != NULL)
			nextNode->prev = NULL;
		free(currNode), *head = nextNode;
		return (1);
	}
	for (i = 1; currNode; i++)
	{
		if (i == index)
		{
			if (!currNode->next)
				prevNode = currNode->prev, prevNode->next = NULL;
			else
			{
				prevNode = currNode->prev, nextNode = currNode->next;
				prevNode->next = nextNode, nextNode->prev = prevNode;
			}
			free(currNode);
			return (1);
		}
		if (currNode->next == NULL)
			return (-1);
		currNode = currNode->next;
	}
return (-1);
}
