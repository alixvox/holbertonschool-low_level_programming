#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates a 2-dimensional grid
 *
 * @width: The width of  the grid
 * @height: The heigth of the grid
 *
 * Return: A pointer to the grid
 */

int **alloc_grid(int width, int height)
{
	int **s = malloc(height * sizeof(int));
	int i;

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
	}

	return (s);
}
