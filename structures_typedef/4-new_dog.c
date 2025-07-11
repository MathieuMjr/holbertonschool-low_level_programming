
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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

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
	/* la fonction retourne l'adresse d'une variable de structure
	dog et prends pour argument l'adresse d'un char qui est le nom
	un float, l'adresse d'un char qui est le propriétaire*/

	/* pour qu'à la fin de la fonction la variable créée reste, il 
	faut l'allouer en mémoire (dans le main, on a créé un pointeur
	de type struct dog ; ensuite on essaie de lui allouer l'adresse
	de la variable)*/

	/* on va donc créer une variable de struct dog et la stocker dans le heap
	Il faudra son adresse. 
	On malloc donc un espace en tas de la taille de la struct dog
	Malloc retourne un pointeur vers la zone mémoire réservée
	On stock cette adresse dans d*/

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	/*on déréférence d pour initialiser le membre name. Sauf
	qu'on ne peux pas lui passer la chaine de charactère qui est en lecture
	seule et non modifiable. 
	On va plutôt la copier ; pour ça, il faut un espace mémoire. 
	On alloue donc quelque chose de la bonne taille. 
	Comme le name peut être variable, on en calcule la longueur
	+ 1 pour le \0 */
	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	else
	{
	/*Maintenant que l'espace mémoire est créé, on va utiliser la fonction
	de copie : on met dans d->name la chaine en argument "name" et il va en
	copier le nombre de caracètre qu'il s'y trouve +1 pour \0
	Strncpy retourne un pointeur pour d->name qui contient la chaine
	de caractère stockée à l'espace mémoire alloué*/
		_strncpy(d->name, name, _strlen(name) + 1);
	}
	/* age est un float. En écrivant ainsi, je ne donne pas à d-> age une
	adresse mais une valeur. 
	Elle est copiée directement dans la heap comme je l'ai défini en allouant
	la structure complète*/
	d->age = age;
	/* Pour owner, même chose que pour name*/
	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	else
	{
		_strncpy(d->owner, owner, _strlen(owner) + 1);
	}
	return (d);
}
