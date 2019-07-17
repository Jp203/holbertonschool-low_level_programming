#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - Used to free previously created 2D grid
 * @grid: Pointer to the grid to be freed.
 * @height: height of said grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
