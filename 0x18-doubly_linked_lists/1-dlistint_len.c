#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a list.
 *
 * @h: The header node
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tempNode = h;
	const dlistint_t *newNode;
	size_t c = 0;

	while (tempNode)
	{
		newNode = tempNode->next;
		c++;
		tempNode = newNode;
	}
return (c);
}
