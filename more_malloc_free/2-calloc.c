#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of element in the array
 * @size: size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;             /* Pointeur générique qui contiendra l'adresse mémoire allouée */
	unsigned int i;        /* Compteur pour la boucle d'initialisation */
	char *ptr_char;        /* Pointeur typé pour parcourir la mémoire octet par octet */

	/* Vérifie que les paramètres sont valides */
	if (nmemb == 0 || size == 0)
	{
		return (NULL);    /* Retourne NULL si l'un des paramètres est nul */
	}

	/* Alloue la mémoire nécessaire (nmemb * size octets) */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);    /* Retourne NULL si l'allocation a échoué */
	}

	/* Cast du pointeur pour pouvoir manipuler la mémoire octet par octet */
	ptr_char = (char *)ptr;

	/* Initialise chaque octet alloué à 0 */
	for (i = 0; i < nmemb * size; ++i)
	{
		ptr_char[i] = 0;
	}

	/* Retourne le pointeur vers la mémoire initialisée */
	return (ptr);
}
