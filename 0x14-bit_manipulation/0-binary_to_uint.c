#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: A char pointer of 0 and 1 chars
 * Return: The unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i, temp;
	unsigned int bnum = atoi(b);
	unsigned int num = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		temp = bnum % 10;
		bnum /= 10;
		num += temp * pow(2, i);
	}

return (num);
}
