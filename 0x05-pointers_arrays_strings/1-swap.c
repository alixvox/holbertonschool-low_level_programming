#include "main.h"
#include <stdio.h>

/**
 * swap_int: swaps the values of two integers
 */

void swap_int(int *a, int *b)
{
	int s;
	s = *a;
	*a = *b;
	*b = s;
}
