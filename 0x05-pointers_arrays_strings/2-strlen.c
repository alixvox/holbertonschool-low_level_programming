#include "main.h"
#include <stdio.h>

/*
 * strlen - returns the length of a string.
 *
 * @s: The string to be measured
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
