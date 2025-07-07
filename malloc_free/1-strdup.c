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
	char *dup;
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

	return (dup);
}
