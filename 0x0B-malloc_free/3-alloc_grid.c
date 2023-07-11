#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2d array of int.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int **tee;
	int n, m;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	tee = malloc(height * sizeof(*tee));
	if (tee == NULL)
		return (NULL);

	for (n = 0; n < height; n++)
	{
		tee[n] = malloc(width * sizeof(**tee));
		if (tee[n] == NULL)
		{
			for (n--; n >= 0; n--)
				free(tee[n]);
			free(tee);
			return (NULL);
		}
		for (m = 0; m < width; m++)
			tee[n][m] = 0;
	}

	return (tee);
}
