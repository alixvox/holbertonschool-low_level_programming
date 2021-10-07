#include "main.h"
#include <stdio.h>

/**
 * more_numbers: prints 10 times the numbers (0 - 14), followed by a new line.
 *
 */

void more_numbers(void)
{
	int i;
	int j;
	int a = 48;
	int b;

	for (i = 0; i < 10; i++)
	{
		while (a < 58)
		{
			if (j==1)
				_putchar(b);
			
			_putchar(a);

			if (a == 57 && j != 1)
			{
				j=1;
				a=48;
				b=49;
			}

			if (j == 1 && a == 52)
				break;

			a++;
		}
		j = 0;
		a = 48;
		_putchar('\n');
	}
}
