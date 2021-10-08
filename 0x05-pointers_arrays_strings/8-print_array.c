#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * print_array: prints n items of an array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n-1)
		{
			printf("%d\n", a[i]);
			break;
		}

		printf("%d, ", a[i]);
	}
}
