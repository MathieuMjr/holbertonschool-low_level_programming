#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for a 2D array
 * @width: number of columns
 * @height: number of rows
 *
 * Return: the pointer of pointer
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}
