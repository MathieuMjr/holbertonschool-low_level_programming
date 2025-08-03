#include "hash_tables.h"

/**
 * key_index - give an index
 * @key: key you want an index for
 * @size: size of the hashtable
 *
 * Return: adress of the array or NULL if fails
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size; /*l'algorithme de hachage génère des valeurs bien supérieure
									à la taille de notre hashtable.
									On en prends le résultat et on en fait "modulo taille de la hashtable"
									Pourquoi ça marche à chaque coup ? Aucune idée... c'est google qui le dit (fatigue)*/
	return (index);
}
