#include "main.h"
#include <stdio.h>

void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		_putchar('\n');
		i++;
		if (i == 50 || i == 52)
			i++;
	}
}

