#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if an int is lowercase.
 *
 * @c: the int to be checked
 *
 * Return: 1 if c is lowercase, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
