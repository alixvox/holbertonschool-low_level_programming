#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies two numbers
 *
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;
	printf("%d\n", sum);
	return (0);
}
