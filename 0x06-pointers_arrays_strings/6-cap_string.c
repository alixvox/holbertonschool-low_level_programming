#include <stdio.h>
#include "holberton.h"

/**
 * cap_string - capitalizes all words
 *
 * @*a: the string to be capitalized
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		switch (a[i])
		{
			case ' ':
			case '\n':
			case '\t':
			case '.':
			case ',':
			case ';':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				if (a[i+1] >= 'a' && a[i+1] <= 'z')
				{
					i++;
					a[i] -= 32;
				}
				break;
			default:
				break;
		}
	}
	return (a);
}
