#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char r;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j <= i; j++)
	{
		r = s[i];
		s[i]=s[j];
		s[j]=r;
		i--;
	}
}
