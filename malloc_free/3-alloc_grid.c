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
	int i, j, k, l;

	/* Vérification des paramètres */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Allocation du tableau de pointeurs (une ligne par pointeur) */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	/* Allocation de chaque ligne (tableau d'entiers) */
	for (i = 0; i < height; ++i)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (l = i - 1; l >= 0; --l)
			{
				free(grid[l]);
			}
			free(grid);
			return (NULL);
		}
	}
	/* Initialisation des éléments à 0 */
	for (j = 0; j < height; ++j)
	{
		for (k = 0; k < width; ++k)
		{
			grid[j][k] = 0;
		}
	}
	return (grid);
}
