#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the number of arguments passed
 *
 * @argc: The arguments
 * @argv: The array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
