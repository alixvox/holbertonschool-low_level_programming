#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the min number of coins to make change
 * @argc: Argument count
 * @argv: Argument array
 *
 * Return: 0, unless change is negative
 */

int main(int argc, char *argv[])
{
	int chleft = atoi(argv[1]);
	int numcoins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	while (chleft - 25 >= 0)
	{
		numcoins++;
		chleft -= 25;
	}

	while (chleft - 10 >= 0)
	{
		numcoins++;
		chleft -= 10;
	}

	while (chleft - 5 >= 0)
	{
		numcoins++;
		chleft -= 5;
	}

	while (chleft - 2 >= 0)
	{
		numcoins++;
		chleft -= 2;
	}
	while (chleft - 1 >= 0)
	{
		numcoins++;
		chleft -= 1;
	}
	printf("%d\n", numcoins);
	return (0);
}
