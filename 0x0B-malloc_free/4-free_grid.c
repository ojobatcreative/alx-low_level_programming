#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up a 2-dimensional grid
 * @grid: double pointer 2-dimensional grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int t;

	for (t = 0; t < height; t++)
		free(grid[t]);
	free(grid);
}
