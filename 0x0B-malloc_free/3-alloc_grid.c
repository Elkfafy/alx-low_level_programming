#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - grid
 * @width: width of grid
 * @height: height of grid
 *
 * Return: 2d array of 0
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (!grid[i])
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
