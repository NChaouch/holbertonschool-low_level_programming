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
	int **grid;
	int count1;
	int count2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (count1 = 0; count1 < height; count1++)
	{
		grid[count1] = malloc(width * sizeof(int));
		if (grid[count1] == NULL)
		{
			for (count2 = 0; count2 < count1; count2++)
			{
				free(grid[count2]);
			}
			free(grid);
			return (NULL);
		}

		for (count2 = 0; count2 < width; count2++)
		{
			grid[count1][count2] = 0;
		}
	}

	return (grid);
}
