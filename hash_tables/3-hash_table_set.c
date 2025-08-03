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
	/*ce code n'est pas parfait... il ne gère pas
	le cas où on voudrait créer un noeud avec une clef qui existe déjà*/
	if (key == NULL || ht == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t)); /*on alloue un espace mémoire pour un nouveau noeud*/
	if (new_node == NULL)/* on vérifie si l'allocation a fonctionnée*/
		return (0);
	new_node->key = strdup(key);/*on assigne les valeur voulue à key ; strdup est nécessaire pour copier une chaine de char*/
	new_node->value = strdup(value);;/*on assigne les valeur voulue à value ; strdup est nécessaire pour copier une chaine de char*/
	new_node->next = NULL;/*on pointe vers NULL comme si c'était le premier noeud à l'index*/

	index = key_index((const unsigned char *)key, ht->size);/*on calcul l'adresse à laquelle sera rangé le noeud qu'on a alloué et définit*/
	if (ht->array[index] == NULL) /*s'il à cet index, la hashtable ne pointe sur rien, on installe notre noeud tel quel : comme un premier noeud*/
		ht->array[index] = new_node;
	else /*mais s'il y a déjà quelque chose*/
	{
		temp = ht->array[index]; /*on stocker l'adresse du noeud existant*/
		ht->array[index] = new_node;/*on fait pointer l'index vers le noeud qu'on a trouvé
									ce dernier est donc en tête de liste*/
		new_node->next = temp;/*on fait pointer notre nouveau noeud vers celui qui était en tête auparavant*/
	}

	return (1);
}
