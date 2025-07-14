#include "function_pointers.h"

/**
 * array_iterator - print numbers of an array
 * @array: array of numbers to print
 * @size: size of the array
 * @action: function to use to print
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
/*deux fonctions permettent d'imprimer. 
Une normalement, l'autre en hexa. 
On doit donc donner à la fonction, que ce soit l'une
ou l'autre, un nombre à imprimer.
Nous voulons imprimer tout l'array.
C'est donc l'argument qu'il faudra à la fonction
qu'on appellera par la fonction action.*/