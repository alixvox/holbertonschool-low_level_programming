#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 *
 * @head: The head node of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextNode;

	while (head)
	{
		nextNode = head->next;
		free(head);
		head = nextNode;
	}
return;
}