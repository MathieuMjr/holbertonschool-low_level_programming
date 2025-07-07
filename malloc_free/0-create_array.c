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
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL) /* toujours vérifier si j'ai eu assez */
						/* mémoire dispo pour que malloc fonctionne */
	{
		return (NULL);
	}
	for (i = 0; i <= size; ++i)
	{
		array[i] = c;
	}
	return (array);
}
