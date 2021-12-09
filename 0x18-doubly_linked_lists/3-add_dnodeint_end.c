#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of a list.
 *
 * @head: The pointer to the head node
 * @n: The int value of the new node
 * Return: The address of the new node
 */
 
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *tempNode = *head;
	
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (!*head)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	while (tempNode->next)
		tempNode = tempNode->next;
	tempNode->next = newNode;
	newNode->prev = tempNode;
return (newNode);
}