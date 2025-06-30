#include "main.h"

/**
 * _strstr - Locate a substring in a string
 * @s1: Pointer to the source string.
 * @s2: Pointer to the substring qe are looking for.
 (*
 * Description: if string 1 is greater than string 2, return a positive
 * number, 0 is they have the same lenght and a negative number otherwise
(* section header: Contains)*
 * Return: the substring. 
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int k;

	while (needle[j] != '\0')
	{
		++j;
	}
	while (haystack[i] != '\0')
	{

	for (k = 0; (i - k) <= j; ++k)
	{
		if (haystack[i] == needle[k])
		{
			
	}
			++i;
}
