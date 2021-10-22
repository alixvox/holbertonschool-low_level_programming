#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Copies a string to a new memory area
 *
 * @str: The string to be copies
 *
 * Return: A pointer to the copy of the string
 */

char *_strdup(char *str)
{
	char *s;
	int size = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		size++;
		str++;
	}
	str = str - size;
	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
