#include "main.h"

/**
 * _memcpy - copy a memory area from one area to another
 * @dest: Pointer to a a dest memory area
 * @src: Pointer to a source memory area
 * @n: n is the number of byte to copy in the dest area.
 (*
 * Description:
(* section header: Contains)*
 * Return: dest memory area with what we paste into it
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
