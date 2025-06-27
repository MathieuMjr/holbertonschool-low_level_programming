#include "main.h"

/**
 * _strcmp - Compares 2 strings
 * @s1: Pointer to the destination string.
 * @s2: Pointer to the source string.
 (*
 * Description: if string 1 is greater than string 2, return a positive
 * number, 0 is they have the same lenght and a negative number otherwise
(* section header: Contains)*
 * Return: a positive number if greater, a negative if less, 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		++i;
	}
	while (s2[j] != '\0')
	{
		++j;
	}
	if (i < j)
	{
		return (-15);
	}
	else if (i > j)
	{
		return (15);
	}
	else
	{
		return (0);
	}
}
