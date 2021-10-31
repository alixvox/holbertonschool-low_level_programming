#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Adds two ints
 *
 * @a: The first int
 * @b: The second int
 *
 * Return: The sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two ints
 *
 * @a: The first int
 * @b: The second int
 *
 * Return: The subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two ints
 *
 * @a: The first int
 * @b: The second int
 *
 * Return: The multiplication
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two ints
 *
 * @a: The first int
 * @b: The second int
 *
 * Return: The division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - computes the remaineder of two ints.
 *
 * @a: The first int
 * @b: The second int
 *
 * Return: The remainder of a / b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
