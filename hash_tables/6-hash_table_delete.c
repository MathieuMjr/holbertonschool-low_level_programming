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

	while (array_index < ht->size) /*vérifie si à l'index en cours, on est à la fin
									de la hastable*/
	{
		reading_head = ht->array[array_index]; /*mettre l'adresse de la chaine à l'index
												voulu de la hashtable dans un pointeur*/
		while (reading_head != NULL)/*s'il y a bien des nodes, entre dans la liste chainée
									vérifie aussi s'il y a un noeud chainé au prochain tour de boucle*/
		{
			temp = reading_head->next;/*stocker l'adresse du prochain noeud*/
			free(reading_head->key); /*libérer la mémoire allouée pour key via strdup*/
			free(reading_head->value);/*libérer la mémoire allouée pour value via strdup*/
			free(reading_head);/*libérer la mémoire allouée pour le noeud*/
			reading_head = temp;/*passer à l'adresse vers laquelle pointait le noeud*/
		}
		array_index++; /*lorsqu'on vérifié s'il y avait des noeuds et parcouru toute la chaine
						on passe à l'index suivant de la hashtable*/
	}
	free(ht->array);
	free(ht);
}
