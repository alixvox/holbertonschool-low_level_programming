#include "lists.h"

/**
 * print_dlistint_backward - Prints a doubly linked list in reverse.
 *
 * @h: The header node.
 * Return: the number of nodes.
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *currNode = h;
	size_t c = 1;

	while (currNode->next)
	{
		currNode = currNode->next;
		c++;
	}
	while (currNode)
	{
		printf("%d\n", currNode->n);
		currNode = currNode->prev;
	}
return (c);
}
