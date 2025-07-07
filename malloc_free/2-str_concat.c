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
	char *conc;
	int i = 0, j = 0;
	int k;

	if (s1 == NULL)
	{
		s1 = "";
	}
		if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		++i;
	}
	while (s2[j] != '\0')
	{
		++j;
	};
	conc = malloc(((i + j) * sizeof(char)) + 1);
	if (conc == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < (i + j); ++k)
	{
		if (k < i)
		{
			conc[k] = s1[k];
		}
		else
		{
			conc[k] = s2[k - i];
		}
	}
	conc[k] = '\0';
	return (conc);
}
