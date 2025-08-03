#include "hash_tables.h"

/**
 * hash_table_delete - delete all the
 * hashtable
 * @ht: pointer to a hashtable
 *
 * Return:
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int array_index = 0;
	hash_node_t *reading_head;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	while (array_index < ht->size)
	{
		reading_head = ht->array[array_index];
		while(reading_head != NULL)
		{
			if (reading_head != NULL)
			{
				temp = reading_head->next;
				free(reading_head->key);
				free(reading_head->value);
				free(reading_head);
				reading_head = temp;
			}
		}
		array_index++;
	}
	free(ht->array);
	free(ht);
}
