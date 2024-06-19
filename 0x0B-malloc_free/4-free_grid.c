#include "main.h"
#include <stdlib.h>
/**
 * free_grid - entry point
 * Desc: function to free a 2-dimensional array of integers.
 * @grid:  2-dimensional array of integers to be set free
 * @height: expected height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
