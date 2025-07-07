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
char *_strdup(char *str)
{
	char* dup;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		++i;
	}

	dup = malloc((i * sizeof(char)) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; ++j)
	{
		dup[j] = str[j];
	}
	dup[j + 1] = _putchar('\0');

	return(dup);
}