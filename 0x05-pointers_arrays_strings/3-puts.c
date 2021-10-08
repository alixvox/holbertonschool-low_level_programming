#include "main.h"
#include <stdio.h>

/*
 * _puts: print a string, followed by a new line.
 */

void _puts(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
