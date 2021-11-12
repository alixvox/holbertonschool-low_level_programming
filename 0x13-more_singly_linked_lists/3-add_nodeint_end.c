#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the beginning of a list
 *
 * @head: The pointer to the head
 * @n: The data of the new node
 *
 * Return: The address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *endNode = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		exit(98);
	newNode->next = NULL;
	newNode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (endNode->next != NULL)
		endNode = endNode->next;
	endNode->next = newNode;
	return (newNode);
}
