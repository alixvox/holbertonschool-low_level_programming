#include <stdio.h>
#include "main.h"

/**
 * test - tests numbers to find the square root of n
 *
 * @n: The number to be square rooted
 * @i: The test int, increments each loop
 *
 * Return: The square root estimate
 */

int test(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (test(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of num
 *
 * @n: The number to be square rooted
 *
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (test(n, i));
}
