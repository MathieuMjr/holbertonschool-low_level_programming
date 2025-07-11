
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog- fonction that create a new variable of struct dog
 * @name: pointeur to a name
 * @age: age of the dog
 * @owner: name of the dog's owner
 * Return: a pointeur a struct type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	else
	{
		_strncpy(d->name, name, _strlen(name) + 1);
	}
	d->age = age;
	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	else
	{
		_strncpy(d->owner, owner, _strlen(owner));
	}
	return (d);
}
