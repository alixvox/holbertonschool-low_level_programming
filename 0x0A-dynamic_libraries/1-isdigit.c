#include "main.h"
#include <stdio.h>

/**
 * isdigit - tests int c to see if it is a digit
 *
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
