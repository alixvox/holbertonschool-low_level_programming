#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 *
 * @n: The input int variable
 * @index: The input index from which to set to 1
 *
 * Return: 1 if successful, -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (1 << index) | *n;
return (1);
}
