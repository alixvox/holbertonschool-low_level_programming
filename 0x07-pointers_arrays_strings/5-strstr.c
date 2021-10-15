#include <stdio.h>
#include "main.h"

/**
 * _strstr - Locates a certain substring.
 *
 * @haystack: The string to search.
 * @needle: The substring to find.
 *
 * Return: A pointer to the beginning of the found substring.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int n;

	for (i = 0; *haystack != '\0'; i++)
	{
		if (*haystack == *needle)
		{
			for (n = 0; *needle != '\0'; n++)
			{
				needle++;
				haystack++;
				if (*needle == '\0')
				{
					haystack = haystack - (n + 1);
					return (haystack);
				}
				if (*haystack == *needle)
				{
					continue;
				}
				else if (*haystack != *needle)
				{
					needle = needle - n;
					haystack = haystack - n;
					break;
				}
			}
		}
		haystack++;
	}
	return (NULL);
}
