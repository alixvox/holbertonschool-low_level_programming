#include "main.h"
#include <stdio.h>

/**
 * test - tests until n is for sure a prime number
 *
 * @n: the number to test
 * @x: the test variable
 *
 * Return: 1 if n is prime, 0 if not
 */

int test(int n, int x)
{
	if (x == n)
	{
		return (1);
	}

	else if (n % x == 0)
	{
		return (0);
	}
	return (test(n, x + 1));
}

/**
 * is_prime_number - recursively determines if n is prime
 * @n: the number to test
 *
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	int x = 2;

	if (n <= 1)
	{
		return (0);
	}
	return (test(n, x));
}
