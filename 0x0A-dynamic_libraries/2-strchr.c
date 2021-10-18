#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string.
 *
 * @s: the string to be searched
 * @c: The character to find
 *
 * Return: The pointer to the first occurence of c, or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *p = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (p);
		}
		p = p + 1;
	}

	return (NULL);
}
