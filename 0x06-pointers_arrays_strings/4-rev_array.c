#include <stdio.h>
#include "holberton.h"

/**
 * reverse_array - reverses the conten of an array
 *
 * @*a: the array to be checked
 * @n: The number of elements of the array)
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i;
	int j = n-1;
	int temp;

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}

}
