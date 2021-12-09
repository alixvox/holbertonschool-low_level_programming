#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a list.
 *
 * @head: The first node of the list
 * @index: The nth node to find
 * Return the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currNode = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		currNode = currNode->next;
	}

return (currNode);
}
