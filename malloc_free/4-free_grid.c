#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Write a function that frees a
 * 2 dimensional grid previously created by your alloc_grid function
 * @grid: The pointer to the grid to be released
 * @height: grid height
 */

void free_grid(int **grid, int height)
{
	int count; /* Declares a variable for count scanning grid lines */

	/* Run through each line of the grid */
	for (count = 0; count < height; count++)
	{
		free(grid[count]); /* Free memory allocated for each line */
	}

	free(grid); /* Free memory allocated for pointer array */
}
