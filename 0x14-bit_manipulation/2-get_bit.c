#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - Returns the bit at a certain index.
 *
 * @n: The uint variable
 * @index: The index for bit to return
 * Return: The value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* if number of bits is 64, return error */
	if (index > 63)
		return (-1);
	/* shift number to the index and compare to 1, then return */
	return ((n >> index) & 1);
}
