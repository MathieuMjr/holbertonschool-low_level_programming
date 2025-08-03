#include "hash_tables.h"

/**
 * hash_table_get - find a value associated
 * to a specific key in the hashtable
 * @ht: pointer to a hashtable
 * @key: key of a node
 *
 * Return: value of the element of NULL if
 * key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node_pointer;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node_pointer = ht->array[index];

	while (node_pointer != NULL && strcmp(node_pointer->key, key) != 0)
	{
		node_pointer = node_pointer->next;
	}
	if (node_pointer == NULL)
		return (NULL);
	return (node_pointer->value);
}
