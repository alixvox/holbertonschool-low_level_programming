#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of ints
 *
 * @min: The minimum range
 * @max: The max range
 *
 * Return: The pointer to the array
 */

int *array_range(int min, int max)
{
	int *a;
	int i;
	int m = min;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= (max - min); i++)
	{
		a[i] = m;
		m++;
	}

return (a);
}
