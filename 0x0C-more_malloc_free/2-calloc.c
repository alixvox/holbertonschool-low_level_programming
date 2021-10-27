#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory
 *
 * @nmemb: The number of blocks to allocate
 * @size: The size of each block
 *
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int c;
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = malloc(nmemb * size);

	for (c = 0; c < (nmemb * size); c++)
	{
		s[c] = 0;
	}
return (s);
}
