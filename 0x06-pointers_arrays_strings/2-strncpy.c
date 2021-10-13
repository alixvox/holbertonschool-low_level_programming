#include <stdio.h>
#include "holberton.h"

/**
 * *_strncpy - copies a string with max n bytes.
 *
 * @dest: the destination string
 * @src: the string to be copied to dest
 * @n: the total bytes from src to use
 *
 * Return: the dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; (j < n && src[j]); j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);

}
