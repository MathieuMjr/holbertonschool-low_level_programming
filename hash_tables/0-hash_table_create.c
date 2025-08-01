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

	ptr = malloc(sizeof(hash_table_t)); /*on créer un noeud (une variable) de la structure de table
										et on stock son adresse dans ptr*/
	if (ptr == NULL)
		return (NULL);

	ptr->size = size; /*on initialise le champs size*/
	ptr->array = calloc(size, sizeof(hash_node_t *));
	/*calloc créer l'array, et stock son adresse dans le champs array*/
	/*l'array stockera des pointeurs vers des noeuds de structure hash_node_t*/
	/*donc ce sera un array de type hash_node_t !*/
	if (ptr->array == NULL)
		return (NULL);

	return (ptr);
}
