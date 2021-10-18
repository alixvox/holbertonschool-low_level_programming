#include <stdio.h>
#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 *
 * @src: the pointer to a string
 * @dest: the pointer to the string to be concatenated
 *
 * Return: the concatenated pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
