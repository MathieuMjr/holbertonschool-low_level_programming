#include "main.h"

/**
 * _strncat - Concatenates up to n characters from src to the end of dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to append from src.
 (*
 * Description: This function appends at most n characters from the
 * string pointed to by src to the end of the string pointed to by dest.
 * The resulting string in dest will be null-terminated.)?
(* section header: Contains)*
 * A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
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
	if (n >= j)
	{
		for (k = i; k < (j + i); ++k)
		{
			dest[k] = src[k - i];
		}
	}
	else
	{
		for (k = i; k < i + n; ++k)
		{
			*(dest + k) = *(src + k - i);
		}
	}
	return (dest);
}
