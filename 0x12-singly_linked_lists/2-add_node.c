#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a node to the head of a linked list
 *
 * @head: The pointer to the pointer to the first node
 * @str: The string to be added to the list
 *
 * Return: The address of the newly added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->next = *head;
	new->str = strdup(str);
	new->len = strlen(str);
	*head = new;

	return (new);
}
