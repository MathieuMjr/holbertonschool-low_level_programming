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
	int nb;
	int k;

	while (s1[i] != '\0')
	{
		++i;
	}
	while (s2[j] != '\0')
	{
		++j;
	}
	for (k = 0; k <= j && k <= i; ++k)
	{
		if (s1[k] == s2[k])
		{
			nb = 0;
		}
		else if (s1[k] < s2[k])
		{
			nb = s1[k] - s2[k];
			break;
		}
		else
		{
			nb = s1[k] - s2[k];
			break;
		}
	}
	return (nb);
}
