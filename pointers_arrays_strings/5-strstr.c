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

	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			while ((needle[j]) != '\0' && (haystack[i + j] == needle[j]))
			{
				++j;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}
