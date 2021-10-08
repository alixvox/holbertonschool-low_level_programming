#include "main.h"
#include <stdio.h>

/**
 * rev_string: reverses a string
 *
 * Return: 0 (Success)
 */

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
