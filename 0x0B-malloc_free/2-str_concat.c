#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concats two strings together
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the copy of the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int size = 0;
	int size1 = 0;
	int i;
	int j;

	while (*s1 != '\0')
	{
		size++;
		s1++;
	}
	s1 = s1 - size;
	while (*s2 != '\0')
	{
		size++;
		size1++;
		s2++;
	}
	s2 = s2 - size1;
	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size - size1); i++)
	{
		if (s1 == NULL)
		{
			break;
		}
		s[i] = s1[i];
	}
	for (j = 0; j < size1; j++)
	{
		if (s2 == NULL)
		{
			break;
		}
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
