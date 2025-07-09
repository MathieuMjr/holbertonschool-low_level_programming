#include "dog.h"

/**
 * init_dog - initialise a variable of struct dog
 * @d: name of the variable
 * @name: name of doggy
 * @age: age of the dog
 * @owner: owner's name of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
