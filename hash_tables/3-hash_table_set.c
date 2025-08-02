#include "hash_tables.h"

/**
 * hash_table_set - create a new node and store
 * it's adresse in hashtable
 * @ht: adress of a hashtable
 * @key: key of the values
 * @value: value of a node
 *
 * Return: 1 if succeed et 0 if fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;
	hash_node_t *temp;
	hash_node_t *check;

	if (key == NULL || ht == NULL || ht->array == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		temp = ht->array[index];
		check = ht->array[index];
		while (check->key != key || check != NULL)
		{
			if (check->next->key == key)
			{
				check = check->next;
				check->value = (char *)value;
				temp = check;
				return (1);
			}
		}
		ht->array[index] = new_node;
		new_node->next = temp;
	}

	return (1);
}
