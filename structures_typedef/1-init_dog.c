#include <stdio.h>
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
/* Vérifie que le pointeur d n'est pas NULL pour éviter un accès invalide */
    if (d == NULL)
    {
        return; /* Sort de la fonction si d est NULL */
    }

    /* Affecte le nom passé en paramètre au membre name de la structure pointée par d */
    (*d).name = name;

    /* Affecte l'âge passé en paramètre au membre age */
    (*d).age = age;

    /* Affecte le nom du propriétaire passé en paramètre au membre owner */
    (*d).owner = owner;
}
