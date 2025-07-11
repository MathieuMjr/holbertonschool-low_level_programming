#include "dog.h"

/**
 * _strncpy - Concatenates up to n characters from src to the end of dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to append from src.
 (*
 * Description: if n greater than src lenght, put '\0' until n is reached.
 * The resulting string in dest will be null-terminated.)?
(* section header: Contains)*
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k;

	while (dest[i] != '\0')
	{
		++i;
	}
	while (src[j] != '\0')
	{
		++j;
	}
	if (n < j)
	{
		for (k = 0; k < n; ++k)
		{
			dest[k] = src[k];
		}
	}
	else if (n > j)
	{
		for (k = 0; k < n; ++k)
		{
			if (k <= j && src[k] != '\0')
			{
				dest[k] = src[k];
			}
			else
			{
				dest[k] = '\0';
			}
		}
	}
	return (dest);
}
