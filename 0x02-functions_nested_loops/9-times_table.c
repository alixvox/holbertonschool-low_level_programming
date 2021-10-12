#include <stdio.h>
#include "main.h"

/**
 * times_table - Print the 9 times table
 *
 */

void times_table(void)
{
	int i;
	int j;
	int num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			num = i * j;
			_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}		
		_putchar('\n');
	}
}
