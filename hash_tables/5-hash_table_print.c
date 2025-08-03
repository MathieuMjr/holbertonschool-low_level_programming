#include "hash_tables.h"

/**
 * ash_table_print - print all data in
 * the hash table
 * @ht: pointer to a hashtable
 *
 * Return:
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int array_index = 0;
	hash_node_t *reading_head;
	int loop_counter = 0;

	
	
	if (ht == NULL)
		printf("{}");
	
	printf("{");
	while (array_index <= ht->size)
	{
		reading_head = ht->array[array_index];
		while(reading_head != NULL)
		{	
			if (array_index > 0 && loop_counter > 0)
				printf(", ");
			printf("'%s': '%s'", reading_head->key, reading_head->value);
			if (reading_head->next != NULL)
				printf(", ");
			reading_head = reading_head->next;
			loop_counter++;
		}
		array_index++;
	}
	printf("}\n");
}
