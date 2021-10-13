#include <stdio.h>
#include "holberton.h"

/**
 * _strncat - concatenates two strings using n bytes
 *
 * @dest: the destination string
 * @src: the string concatenated to dest
 * @n: the max number of bytes to use
 *
 * Return: the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; (j < n && src[j] != '\0'); j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
