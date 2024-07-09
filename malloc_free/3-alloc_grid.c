#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: integer.
 * @height: integer.
 * Return: grid if success.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int t; /* variable for row */
	int col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (t = 0; t < height; t++)
	{
		grid[t] = malloc(width * sizeof(int));
    	if (grid[t] == NULL)
    	
	    for (col = 0; col < width; col++)
	    {
            grid[t][col] = 0;
	    }
    }
	return (grid);
}
