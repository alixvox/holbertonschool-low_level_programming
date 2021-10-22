#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
