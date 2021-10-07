#include "main.h"
#include <stdio.h>

/**
 * print_line: prints _ n number of times
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
