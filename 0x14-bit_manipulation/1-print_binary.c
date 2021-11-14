#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_binary - Converts a decimal to binary and prints it
 *
 * @n: The decimal number
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
