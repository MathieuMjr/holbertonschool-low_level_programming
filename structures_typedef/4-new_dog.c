
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - count string of char lenght
 * @s: adresse of a char var
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: the lenght of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
	return (i);
}


/**
 * _strncpy - Concatenates up to n characters from src to the end of dest.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 * @n: Maximum number of characters to append from src.
 (*
 * Description: if n greater than src lenght, put '\0' until n is reached.
 * The resulting string in dest will be null-terminated.)?
(* section header: Contains)*
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k;

	while (dest[i] != '\0')
	{
		++i;
	}
	while (src[j] != '\0')
	{
		++j;
	}
	if (n < j)
	{
		for (k = 0; k < n; ++k)
		{
			dest[k] = src[k];
		}
	}
	else if (n > j)
	{
		for (k = 0; k < n; ++k)
		{
			if (k <= j && src[k] != '\0')
			{
				dest[k] = src[k];
			}
			else
			{
				dest[k] = '\0';
			}
		}
	}
	return (dest);
}

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
