#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars with a specific char
 *
 * @size: The size of the array
 * @c: character to initialize array with
 *
 * Return: A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
