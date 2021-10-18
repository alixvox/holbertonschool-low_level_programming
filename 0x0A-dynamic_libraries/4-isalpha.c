#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks if an int is a letter.
 *
 * @c: the int to be checked
 *
 * Return: 1 if true, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
