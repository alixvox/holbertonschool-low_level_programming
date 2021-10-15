#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - recursively returns the length of a string.
 *
 * @s: The string to be measured
 *
 * Return: The length of string s
 */

int _strlen_recursion(char *s)
{
	if (*s  != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
