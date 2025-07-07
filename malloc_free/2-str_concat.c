#include "main.h"
#include <stdlib.h>

/**
 * str_concat - pointer to 2 concatenated strings
 * @s1: pointer to a string of char
 * @s2: pointer to another string of char
 *
 * Return: pointer to a new string with s1 et s2
 * concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *conc;      /* Pointeur vers la nouvelle chaîne concaténée */
	int i = 0, j = 0; /* Compteurs pour les longueurs de s1 et s2 */
	int k;           /* Compteur pour copier les caractères */

	/* Si s1 est NULL, on le remplace par une chaîne vide */
	if (s1 == NULL)
	{
		s1 = "";
	}

	/* Si s2 est NULL, on le remplace aussi par une chaîne vide */
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* On calcule la longueur de s1 */
	while (s1[i] != '\0')
	{
		++i;
	}

	/* On calcule la longueur de s2 */
	while (s2[j] != '\0')
	{
		++j;
	}

	/* On alloue la mémoire pour la chaîne concaténée :
	   - i + j pour la longueur totale
	   - +1 pour le caractère nul final */
	conc = malloc(((i + j) * sizeof(char)) + 1);
	if (conc == NULL)
	{
		/* Si l'allocation échoue, on retourne NULL */
		return (NULL);
	}

	/* On copie les caractères de s1 puis de s2 dans conc */
	for (k = 0; k < (i + j); ++k)
	{
		if (k < i)
		{
			/* Copier s1 dans conc */
			conc[k] = s1[k];
		}
		else
		{
			/* Copier s2 dans conc à partir de l’indice k - i */
			conc[k] = s2[k - i];
		}
	}

	/* On termine la chaîne concaténée avec le caractère nul */
	conc[k] = '\0';

	/* On retourne la chaîne concaténée */
	return (conc);
}
