#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - prints nums from n to 98
 *
 * @n: the starting int
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}

	printf("98");
}
