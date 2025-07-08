#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - return a pointer to allocated memory
 * or return 98 if fails
 * @b: size of memory space you want to allocate
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	/* Attention void * ne signifie pas que la fonction retourne void
	Mais qu'elle retourne un pointeur générique
	Il faut bien retourner ! (un pointeur générique)*/
	/* Déclaration d'un pointeur pour stocker l'adresse mémoire allouée */
	void *memalloc;

	/* Tentative d'allocation de b octets avec malloc */
	memalloc = malloc(b);

	/* Si malloc échoue, le pointeur sera NULL */
	if (memalloc == NULL)
	{
		/* Quitte le programme avec un code d'erreur 98 */
		exit(98);
	}

	/* Retourne le pointeur vers la mémoire allouée */
	return (memalloc);
}
