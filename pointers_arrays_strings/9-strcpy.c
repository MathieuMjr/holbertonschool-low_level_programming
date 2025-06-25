#include "main.h"

/**
 * _strcpy - takes a source and put it in an array
 * @dest: array of destination
 * @src: string to use as source to put in the array
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: char string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0' ; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
