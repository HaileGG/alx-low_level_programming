#include <stdio.h>
#include "main.h"

/**
 * **alloc_grid - returns pointer to a 2D array.
 * @width: width of 2D array.
 * @height: height of 2D array.
 * Return: pointer to the array.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(*a) * height);
	if (a == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == 0)
		{
			for (j = ; j < i; j++)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
