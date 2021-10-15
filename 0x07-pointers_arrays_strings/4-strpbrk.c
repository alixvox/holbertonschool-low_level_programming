#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: The string to be searched
 * @accept: The string of chars to look for
 *
 * Return: the rest of string s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int n = 0;

	while (*accept != '\0')
	{
		n++;
		accept++;
	}
	accept = accept - n;

	while (*s != '\0')
	{
		for (i = 0; i < n; i++)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		accept = accept - n;
		s++;
	}

	return (NULL);
}
