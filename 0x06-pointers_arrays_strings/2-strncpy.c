#include <stdio.h>
#include "holberton.h"

/**
 * *_strncpy - copies a string with max n bytes.
 *
 * @dest: the destination string
 * @src: the string to be concatenated to dest
 * @n: the total bytes from src to use
 *
 * Return: the dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
