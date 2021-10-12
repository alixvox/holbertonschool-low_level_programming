#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int a = 0;
	int b = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 2 && j == 4)
			{
				break;
			}
			for (a = 0; a < 6; a++)
			{
				for (b = 0; b < 10; b++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar('\n');
				}
			}
		}
	}
}
