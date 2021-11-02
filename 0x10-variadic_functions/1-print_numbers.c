#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints all numbers passed into it
 *
 * @separator: The delimiter string
 * @n: The number of args
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (i + 1 != n && separator)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
