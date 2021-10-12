#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: the int to be checked
 *
 * Return: the last digit of int n
 */

int print_last_digit(int n)
{
	int lastDig = n % 10;
	char chLastDig;

	lastDig = lastDig < 0 ? -lastDig : lastDig;
	chLastDig = lastDig + '0';
	_putchar(chLastDig);
	return (lastDig);
}
