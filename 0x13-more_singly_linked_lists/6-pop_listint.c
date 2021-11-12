#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a list.
 *
 * @head: A reference to the pointer of the head node
 * Return: The data of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *tempNode = *head;
	int n = tempNode->n;

	if (!tempNode)
		return (0);
	*head = tempNode->next;

return (n);
}
