#include "main.h"

/**
 * _strspn - Returns the number of byte in a string that match specific
 * chars
 * @s: Pointer to a source string
 * @accept: Pointer to a list of char we are looking for in source.
 (*
 * Description: If a char from "accept" is found in "s", then count
 * how much space it takes. It stops as soon a char from accept is not found.
(* section header: Contains)*
 * Return: The number of bytes matching our "accept" list
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;
	unsigned int b = 0 ; /* indicateur de présence d'un char recherché*/

	while (accept[j] != '\0')
	{
		++j;
	}
	while (s[i] != '\0')
	{
		for (k = 0; k <= (j); ++k)
		{
			if (s[i] == accept[k])
			{
				++b;
			}
		}
		if (b != (i + 1))
		{
			break;
		}
		++i;
	}
return (b);
}
