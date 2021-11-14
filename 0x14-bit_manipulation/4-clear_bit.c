#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets a bit at index to 0
 *
 * @n: Input uint variable
 * @index: Input index to set to 0
 * Return: 1 if successful, -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	/* return 0 at index by shifting to index and comparing via & */
	*n = ~(1 << index) & *n;
return (1);
}
