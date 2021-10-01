#include <stdio.h>

/**
 * main - Prints the size of different types
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	long int longIntType;
	long long int longLongIntType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of a char: %zu byte(s)\n", sizeof(charType));
    printf("Size of an int: %zu bytes(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongIntType));
    printf("Size of float: %zu bytes(s)\n", sizeof(floatType));

	return (0);
}
