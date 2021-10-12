#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a random number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int lastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDig = n % 10;
	printf("Last digit of %d is %d and is ", n, lastDig);
	if (lastDig > 5)
		printf("greater than 5");
	else if (lastDig == 0)
		printf("0");
	else
		printf("less than 6 and not 0");
	printf("\n");
	return (0);
}
