#include <stdio.h>
#include "holberton.h"

/**
 * string_toupper - converts all lowercase to uppercase.
 *
 * @*a: the string literal to be checked
 *
 * Return: The string literal with all caps
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
	}

	return a;
}
