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

	index = hash_djb2(key) % size;

	return (index);
}
