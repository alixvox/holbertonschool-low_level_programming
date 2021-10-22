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
	int **s;
	int i;

	if (width < 1 || height < 1)
		return (NULL);
	s = malloc(height * sizeof(s));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		if (s[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(s[i]);
			}
			free(s);
			return (NULL);
		}
	}

	return (s);
}
