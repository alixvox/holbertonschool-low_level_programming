#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds one or more positive numbers
 *
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 1 if an arg is not a number, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

