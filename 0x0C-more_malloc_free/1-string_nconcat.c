#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenated two strings
 *
 * @s1: The first string
 * @s2: The second string
 * @n: The amount of s2 to add
 *
 * Return: The concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1;
	unsigned int len2;
	unsigned int i = 0;
	unsigned int j;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; *s1 != '\0'; len1++)
			s1++;
		s1 = s1 - len1;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; *s2 != '\0'; len2++)
			s2++;
		s2 = s2 - len2;
	}
	if (len2 > n)
		len2 = n;

	s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0; i < len1; j++, i++)
		s[i] = s1[j];
	for (j = 0; j < len2; j++, i++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
