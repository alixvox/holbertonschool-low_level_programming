#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <unistd.h>

/**
 * main - prints the name of the file it was compiled from
 *
 *
 * Return: Always 0
 */

int main(void)
{
	char *dest = __FILE__;

	while (*dest != '\0')
	{
		_putchar(*dest);
		dest++;
	}
	_putchar('\n');
	return (0);
}
