#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - Adds a new node to the end of a list
 *
 * @head: A pointer to the head of the list
 * @str: A pointer to the string to add to the new node
 *
 * Return: The address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = new;

	return (new);
}
