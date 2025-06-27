#include "main.h"

/**
 * _strcat - append a src string to a dest one
 * @dest: array of destination
 * @src: string to use as source to put in the array
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: char string
 */
char *_strcat(char *dest, char *src)
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
	for (k = i; k < (j + i); ++k)
	{
		*(dest + k) = *(src + k - i);
	}
	return (dest);
}
