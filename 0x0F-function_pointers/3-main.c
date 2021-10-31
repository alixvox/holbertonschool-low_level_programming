#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - computes an operation on two ints.
 *
 * @argv: The argument array
 * @argc: The number of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *allops = "+-*/%";
	int (*finalop)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}
	if (!strstr(allops, argv[2]))
	{
		printf("Error\n");
		return (EXIT_FAILURE);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	finalop = get_op_func(argv[2]);

	printf("%d\n", finalop(a, b));

	return (0);
}
