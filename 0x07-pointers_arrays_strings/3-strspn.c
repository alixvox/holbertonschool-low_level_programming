#include "main.h"
#include <stdio.h>

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: The string to check
 * @accept: The string to compare to s
 *
 * Return: The number of times characters from accept are in s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	unsigned int i = 0;
	unsigned int j;


	while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				i++;
				break;
			}
		}
	}
	return (c);
}
