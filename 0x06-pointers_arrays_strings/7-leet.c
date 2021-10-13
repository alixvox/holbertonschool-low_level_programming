#include <stdio.h>
#include "holberton.h"

/**
 * leet - converts text into 1337 format.
 *
 * @a: the string to be converted
 *
 * Return: the converted string a
 */

char *leet(char *a)
{
	int i;
	int j = 0;
	char reg[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char *preg = reg;
	char *pleet = leet;

	for (i = 0; a[i] != '\0'; i++)
	{
		while (j < 10)
		{
			if (a[i] == *preg)
			{
				a[i] = *pleet;
			}

			preg++;
			pleet++;
			j++;
		}
		preg = preg - j;
		pleet = pleet - j;
		j = 0;
	}
	return (a);
}
