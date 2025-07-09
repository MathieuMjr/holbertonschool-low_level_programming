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
		ptr = 0; 
	}
	return (ptr);
}
