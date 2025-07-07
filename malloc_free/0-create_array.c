#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initializes it
 * with a specific char
 * @size: size of the array
 * @c: char to initialize it with
 *
 * Return: pointer to a char.
 */
char *create_array(unsigned int size, char c) 
{
	char *array;        /* Pointeur vers le tableau à allouer */
	unsigned int i;     /* Compteur pour la boucle */

	/* Si la taille est nulle, on retourne NULL */
	if (size == 0)
	{
		return (NULL);
	}

	/* Allocation de la mémoire pour 'size' caractères */
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		/* Vérification de l'échec d'allocation mémoire */
		return (NULL);
	}

	/* Initialisation du tableau avec le caractère 'c' */
	for (i = 0; i < size; ++i) /* ⚠️ ici on corrige la condition : i < size */
	{
		array[i] = c;
	}

	/* On retourne le tableau initialisé */
	return (array);
}
