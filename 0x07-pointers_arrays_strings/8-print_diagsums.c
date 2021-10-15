#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix.
 *
 * @a: the square matrix
 * @size: The size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j = size - 1;
	int lsum = 0;
	int rsum = 0;

	for (i = 0; i < size; i++)
	{
		rsum += a[j];
		j--;
		a = a + size;
	}
	a = a - (size * (size - 1) - 1 + size);
	for (i = 0; i < size; i++)
	{
		lsum += a[j];
		j++;
		a = a + size;
	}

	printf("%d, %d\n", lsum, rsum);
}
