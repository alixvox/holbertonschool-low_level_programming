#include "lists.h"

/**
 * add_dnodeint - Adds a new node to the beginning of a list.
 *
 * @head: The head node
 * @n: The value of the new node
 * Return: The address of the node if successful, or NuLL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = *head;
	newNode->prev = NULL;
	if (*head)
		(*head)->prev = newNode;
	newNode->n = n;
	*head = newNode;
return (newNode);
}