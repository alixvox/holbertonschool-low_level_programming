#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning of a list
 *
 * @head: The pointer to the head
 * @n: The data of the new node
 *
 * Return: The address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		exit(98);
	newNode->next = *head;
	newNode->n = n;
	*head = newNode;

	return (newNode);
}
