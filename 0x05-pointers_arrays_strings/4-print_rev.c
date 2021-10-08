#include "main.h"
#include <stdio.h>

/*
 * print_rev - prints a string in reverse.
 *
 * @s: the string to be reversed.
 */

void print_rev(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		i++;
	}

	while (i >=0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}

