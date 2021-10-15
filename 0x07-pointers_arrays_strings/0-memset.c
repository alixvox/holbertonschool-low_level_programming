#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: The memory area to write
 * @b: The byte to use
 * @n: The number of bytes of s to fill
 *
 * Return: the pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
