#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2 dimensional array of integers.
 * @width: number of columns.
 * @height: number of rows.
 * Return: returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int a, b, **grid;

	/* 0 CHECK */
	if (width <= 0 || height <= 0)
		return (NULL);
	/* Allocate memory for grid height to be used */
	grid = malloc(height * sizeof(int *));
	/* NULL CHECK */
	if (grid == NULL)
		return (NULL);
	/* Gets height */
	for (a = 0; a < height; a++)
	{
		/* Allocate memory for grid width to be used */
		grid[a] = malloc(width * sizeof(int));
		/* NULL CHECK */
		if (grid[a] == NULL)
		{
			/* Free spent memory */
			for (b = a - 1; b >= 0; b--)
				free(grid[b]);
			free(grid);
			return (NULL);
		}
		/* Gets width */
		for (b = 0; b < width; b++)
			/* Initialize both elements to 0 */
			grid[a][b] = 0;
	}
	return (grid);
}
