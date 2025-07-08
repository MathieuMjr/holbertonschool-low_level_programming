#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - return a pointer to allocated memory
 * or return 98 if fails
 * @b: size of memory space you want to allocate
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	 void *memalloc;

	memalloc = malloc(b);
	if (memalloc == NULL)
	{
		exit(98);
	}
	return (memalloc);
}
