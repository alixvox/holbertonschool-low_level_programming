#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 *
 * @head: The pointer to the first node of the list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *nextNode;

	while (head)
	{
		nextNode = head->next;
		free(head);
		head = nextNode;
	}
return;
}
