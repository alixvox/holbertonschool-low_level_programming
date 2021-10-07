#include <stdio.h>
#include "main.h"

/**
*
* _isupper: Takes a char and tests if it is upper or lower case
* 
* Return: 1 if uppercase, 0 if otherwise
* 
*/

int _isupper(int c)
{
	if (c > 64 && c < 90)
		return (1);
	else
		return (0);
}
