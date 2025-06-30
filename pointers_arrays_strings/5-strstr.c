#include "main.h"

/**
 * _strstr - Locate a substring in a string
 * @haystack: Pointer to the source string.
 * @needle: Pointer to the substring qe are looking for.
 (*
 * Description: if string 1 is greater than string 2, return a positive
 * number, 0 is they have the same lenght and a negative number otherwise
(* section header: Contains)*
 * Return: the substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;
	int k = 0;
	int l = 0;

	while (needle[k] != '\0')
	{
		k++;
	}
	while (haystack[l] != '\0')
	{
		++l;
	}
	printf("valeur de k: %d\n", k);
	while (i < (l - k))
	{
		if ((haystack[i]) == (needle[0]))
		{
			for (j = 1; needle[j] != '\0'; ++j)
			{
				if (haystack[i + j] != needle[0 + j])
				{
					break;
				}
			}
			if (j == k)
			{
				return (haystack + i);
			}
		}
		else
		{
			++i;
		}
	}
	return (NULL);
}
