#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of element in the array
 * @size: size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
	char *ptr_char = (char *)ptr;
	for (i = 0; i < nmemb; ++i)
	{
		ptr_char[i] = 0;
	}
	}
	return (ptr);
}
