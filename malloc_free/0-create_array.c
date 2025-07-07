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

	array = malloc(size * sizeof(char));
	for (i = 0; i <= size; ++i)
	{
		array[i] = c;
	}
	return (array);
}
