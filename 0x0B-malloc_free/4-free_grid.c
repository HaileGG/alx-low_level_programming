#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a previously created 2D grid.
 * @grid: 2D grid to be free.
 * @height: height of grid.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}

