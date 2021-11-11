#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_list - Frees a list from memory
 *
 * @head: The pointer to the head node
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
