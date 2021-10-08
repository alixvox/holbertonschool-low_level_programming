#include "main.h"
#include <stdio.h>

/**
 * puts_half - print the second half of the string
 *
 * @str: the string to be compared.
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	j = i / 2;

	while (j<= i)
	{
		_putchar(str[j - 1]);
		j++;
	}
}
