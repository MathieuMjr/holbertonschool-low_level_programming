#include "main.h"

/**
 * _strpbrk - searchs of char in a string ; as soon as one is found,
 * it prints every other chars of the string
 * @s: Pointer to the string to explore.
 * @accept: Pointer to a list of char we are looking for.
 (*
 * Description: 
(* section header: Contains)*
 * Return: Return bytes in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;
	int k;
	
	while (s[j] != '\0')
	{
		for (k = 0; accept[k] != '\0'; ++k)
		{
			if (s[j] == accept[k])
			{
				return (s + j);
			}
		}
		j++;
	}
return (NULL);
}
