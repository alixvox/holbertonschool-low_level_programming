#include "lists.h"

/**
 * print_dlistint - prints all the elements of a doubly linked list
 *
 * @h: The head node of the list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tempNode = h;
	const dlistint_t *nextNode;
	size_t c = 0;
	
	while (tempNode)
	{
		nextNode = tempNode->next;
		printf("%d\n", tempNode->n);
		tempNode = nextNode;
		c++;
	}

	return (c);
}
