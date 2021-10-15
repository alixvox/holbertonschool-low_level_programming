#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Copies memory area.
 *
 * @dest: The destination memory area
 * @src: the source to copy to dest
 * @n: the number of bytes to copy
 *
 * Return: the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
