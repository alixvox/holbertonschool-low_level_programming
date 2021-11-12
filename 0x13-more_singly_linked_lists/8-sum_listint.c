#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of the data in a list
 *
 * @head: A pointer to the head node of the list
 * Return: The sum of all data in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *nextNode;
	unsigned int sum = 0;

	nextNode = malloc(sizeof(listint_t));
	if (!nextNode)
		exit(98);
	while (head != NULL)
	{
		sum += head->n;
		nextNode = head->next;
		head = nextNode;
	}
return (sum);
}
