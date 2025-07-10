#include <stdlib.h>
#include "dog.h"

/**
 * free_dog- fonction that free memory from a var of dog struct
 * @d: pointeur to a var of dog's struct
 * return : a pointeur a struct type dog_t
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return (0);
	}
	free(d->name);
	free(d->owner);
	free(d);
}
