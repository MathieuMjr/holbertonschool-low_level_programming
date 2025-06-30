#include "main.h"

/**
 * _memset - write a char in a given memory space.
 * @s: Is a memory spaced (pre buffed)
 * @b: Is what we want to write in this memory space.
 * @n: n is the number of byte to fill.
 (*
 * Description:
(* section header: Contains)*
 * Return: what s points to
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
