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
			if (num > 9 && j != 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (num <= 9 && j != 9)
			{
				_putchar(num + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}	
			else
			{
				if (num > 9)
				{
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				}
				else
				{
					_putchar(num + '0');
				}
			}
		}		
		_putchar('\n');
	}
}
