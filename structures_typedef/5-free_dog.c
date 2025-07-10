#include <stdlib.h>
#include "dog.h"

/**
 * new_dog- fonction that create a new variable of struct dog
 * @name: pointeur to a name
 * @age: age of the dog
 * @owner: name of the dog's owner
 * return : a pointeur a struct type dog_t
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
