#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created
 * @grid: array of pointer to columns of the grid
 * @height: array of int ; rows of the grid
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; ++i)
	{	/* parcourir les lignes pour les effacer*/
		free(grid[i]);
	}
	free(grid); /* effacer le tableau de pointeurs 
				qui pointe sur les lignes*/
}
