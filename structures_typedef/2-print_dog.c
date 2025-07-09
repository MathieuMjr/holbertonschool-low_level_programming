#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print members of a struct dog variable
 * @d: adress of the variable
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
	{
		printf("Name: %p\n", NULL);
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}
	printf("Age: %f\n", (*d).age);
	if ((*d).owner == NULL)
	{
		printf("Owner: %p\n", NULL);
	}
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
}
