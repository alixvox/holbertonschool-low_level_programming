#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the name of the program
 *
 * @argc: The arguments
 * @argv: The array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
