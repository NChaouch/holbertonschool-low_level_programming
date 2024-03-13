#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a 2 dimensional array of integers
 * @width: The width of the grid
 * @height: The height of the grid
 * Return: Pointer to the allocates grid, or NULL if failure
 */

int **alloc_grid(int width, int height)
{
	/* declarations of variables */
	int **grid, count1, count2;

	/* Checks if width or height is zero or negative */
	if (width <= 0 || height <= 0)
	{
		return (NULL); /* Returns NULL if dimensions are invalid */
	}

	/* Allocates memory for pointer array (for each line) */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL); /*Returns NULL if memory allocation fails */
	}

	/* Loop to allocate memory for each line and initialize elements to 0 */
	for (count1 = 0; count1 < height; count1++)
	{
		/* Allocates memory for each line of the table */
		grid[count1] = malloc(width * sizeof(int));
		if (grid[count1] == NULL)
		{
			/* Releases memory allocated for previous lines if allocation fails */
			for (count2 = 0; count2 < count1; count2++)
			{
				free(grid[count2]);
			}
			free(grid); /* Free memory allocated for pointer array */
			return (NULL); /* Returns NULL on failure */
		}

		/* Initializes each line element to 0 */
		for (count2 = 0; count2 < width; count2++)
		{
			grid[count1][count2] = 0;
		}
	}

	return (grid); /* Returns the pointer to the allocated pointer array */
}
