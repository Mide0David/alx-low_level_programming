#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - initializes a 2d array with zero
 * @width: the column of the matrix
 * @height: the rows of the matrix
 * Return: returns the created 2d matrix
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) calloc(width, sizeof(int));

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
