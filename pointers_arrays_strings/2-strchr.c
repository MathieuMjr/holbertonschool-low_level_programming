#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: Pointer to a string we want to search in
 * @c: Character we are looking for
 (*
 * Description:
(* section header: Contains)*
 * Return: pointer to the first occurence of the character c in s
 * or NULL if char not found
 */
char *_strchr(char *s, char c)
{
	int i;
	int j = 0;

	while (s[j] != '\0')
	{
		++j;
	}
	for (i = 0; i <= j; ++i)
	{
		if (s[i] != c)
		{}
		else
		{
			break;
		}
	}
	if (i > j)
	{
		return (NULL);
	}
	else
	{
		return (s + (i));
	}
}
