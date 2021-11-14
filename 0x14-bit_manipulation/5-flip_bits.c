#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - Returns num of flips from n to m to make them match
 *
 * @n: 1st input uint variable
 * @m: 2nd input uint variable
 * Return: The number of flips needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nflips;
	unsigned long int i = n ^ m;

	for (nflips = 0; i > 0; nflips++)
		i &= (i - 1);
return (nflips);
}
