#include "hash_tables.h"

/**
 * hash_table_create - create a hashtable
 * @size: size of the array
 *
 * Return: adress of the array or NULL if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);
	
	ptr->size = size;
	ptr->array = calloc(size, sizeof(hash_node_t *));
	if (ptr->array == NULL)
		return (NULL);

	return (ptr);
}
