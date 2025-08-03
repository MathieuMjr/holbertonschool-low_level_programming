#include "hash_tables.h"

/**
 * hash_table_print - print all data in
 * the hash table
 * @ht: pointer to a hashtable
 *
 * Return:
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int array_index = 0;
	hash_node_t *reading_head;
	int print_counter = 0;

	if (ht == NULL)
		printf("{}");

	printf("{");
	while (array_index < ht->size) /*condition pour ne pas sortir de la hashtable*/
	{
		reading_head = ht->array[array_index];/*on place une tête de lecture sur un noeud éventuel stocké à l'index en cours
												de la hashtable*/
		while (reading_head != NULL)/*s'il y a bien l'adresse d'un noeud, on entre dans les instructions d'impression */
		{
			if (print_counter > 0)/*ce compteur monte chaque fois qu'il y a eu une impression. Au de l'exploration, il est egal à 0
									par la suite, il s'imprimera après chaque valeur sauf la dernière, car la boucle ne recommencera pas*/
				printf(", ");/*imprime une virgule après chaque valeur, sauf la dernière et sauf avant la première*/
			printf("'%s': '%s'", reading_head->key, reading_head->value);/*imprime la key et la value dans le format désiré*/
			print_counter++;/*augmente le compteur dès qu'une première valeur est imprimée*/
			reading_head = reading_head->next;/*se déplace vers l'adresse vers laquelle pointe le noeud.
												S'il n'y en as pas (null) la boucle ne recommence pas*/
		}
		array_index++; /* lorsque tout est imprimé, on passe à l'index suivant*/
	}
	printf("}\n");/*lorsque toute la hashtable a été parcourue et imprimée, on imprime l'accolade de fin et un saut de ligne*/
}
