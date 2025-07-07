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

	/* Vérification des paramètres, on refuse les dimensions nulles ou négatives */
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
			/* Décrémenter i pour revenir à la dernière ligne allouée avant l'échec */
			--i;

			/* LIBÉRATION : Boucle pour libérer toutes les lignes allouées jusqu'ici */
			/* REMARQUE : il est préférable d'utiliser une variable différente ici pour la boucle */
			/* afin d'éviter toute confusion ou modification inattendue de 'i' dans la boucle for. */
			while (i >= 0)
			{
				free(grid[i]);
				--i;
			}

			/* IMPORTANT : Il faut aussi libérer le tableau de pointeurs 'grid' lui-même, */
			/* sinon on crée une fuite mémoire ici. */
			/* Exemple de libération à ajouter ici : */
			/* free(grid); */

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
