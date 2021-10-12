#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	printf("\n");
	return (0);
}
