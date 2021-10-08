#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointer to by dest.
 *
 * @dest: The destination string.
 * @src: The string to be copied to dest.
 *
 * Return: the destination string (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
