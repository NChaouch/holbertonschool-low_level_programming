#include "main.h"
#include <stdlib.h>
/**
 * free_grid -  function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: pointer to the pointer of grid (integer).
 * @height: integer.
 */
void free_grid(int **grid, int height)
{
	int t;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (t = 0; t < height; t++)
	{
		free(grid[t]);
	}

	free(grid);
}
