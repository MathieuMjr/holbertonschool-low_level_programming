#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for a 2D array
 * @width: number of columns
 * @height: number of rows
 *
 * Return: the pointer of pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; ++i)
	{
		grid[i] = malloc(width * sizeof(int));
	}
	for (j = 0; j < height; ++j)
	{
		for (k = 0; k < width; ++k)
		{
			grid[j][k] = 0;
		}
	}
	return (grid);
}
