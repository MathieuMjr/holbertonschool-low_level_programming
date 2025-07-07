#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string in a new one
 * with a specific char
 * @str: pointer to the string you want to duplicate
 *
 * Return: pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;      /* Pointeur vers la chaîne dupliquée */
	int i = 0;      /* Compteur pour la longueur de str */
	int j;          /* Compteur pour la copie caractère par caractère */

	/* Si str est NULL, on retourne NULL directement */
	if (str == NULL)
	{
		return (NULL);
	}

	/* On mesure la longueur de str (sans inclure le '\0') */
	while (str[i] != '\0')
	{
		++i;
	}

	/* On alloue la mémoire pour une copie de str, incluant le '\0' final */
	dup = malloc((i * sizeof(char)) + 1);
	if (dup == NULL)
	{
		/* L'allocation a échoué */
		return (NULL);
	}

	/* On copie les caractères un par un dans dup */
	for (j = 0; j < i; ++j)
	{
		dup[j] = str[j];
	}

	/* On termine la chaîne copiée par le caractère nul */
	dup[j] = '\0';

	/* On retourne la copie de la chaîne */
	return (dup);
}
