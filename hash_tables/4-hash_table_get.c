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

	index = key_index((const unsigned char *)key, ht->size); /*on cherche la valeur d'une key. On commence par savoir à quel index
																elle aurait été rangée*/

	node_pointer = ht->array[index];/*on se met à cet index et on regarde à l'adresse où il pointe*/

	while (node_pointer != NULL && strcmp(node_pointer->key, key) != 0) /*s'il y a bien un noeud (!= null) et si
																		à ce noeud, il n'y a pas de match entre la key qu'y sy trouve
																		et celle que l'on cherche*/
	{
		node_pointer = node_pointer->next; /*on va vers l'adresse qui pointe vers le noeud suivant*/
	}
	if (node_pointer == NULL)/*si la boucle s'est arrêtée car on est arrivé à la fin de la list chaînée
							alors c'est qu'il n'y a pas eu de match entre la key recherchée et celles visitées à l'index*/
		return (NULL);/*donc on retourne NULL : pas de correspondance trouvée*/
	return (node_pointer->value); /*sinon, c'est qu'il y a eu un match ! alors on retourne la valeur
									qui accompagne cette clef*/
}
