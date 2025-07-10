#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog- fonction that create a new variable of struct dog
 * @name: pointeur to a name
 * @age: age of the dog
 * @owner: name of the dog's owner
 * return : a pointeur a struct type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pouet;

	pouet = malloc(sizeof(dog_t));
	if (pouet == NULL)
	{
		return (NULL);
	}
	pouet->name = name;
	pouet->age = age;
	pouet->owner = owner;

	return (pouet);
}
