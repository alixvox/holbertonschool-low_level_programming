#include <stdio.h>
#include "holberton.h"

/**
 * _strcmp - compares two strings
 *
 * @*s1: first string to compare
 * @*s2: second string to compare
 *
 * Return: the difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int n = 0;

	for (i = 0; (s1[i] != '\0') || (s2[i] != '\0'); i++)
	{
		n += (s1[i]  - s2[i]);
	}

	
	return (n);
}
