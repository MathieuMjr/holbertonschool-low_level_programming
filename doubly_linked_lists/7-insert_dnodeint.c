#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node à index idx
 * @h: adresse du head
 * @idx: index où insérer le nœud
 * @n: valeur du nœud à insérer
 *
 * Return: pointeur vers le nouveau nœud
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0; /*compteur de boucle pour comparer à l'index*/
	dlistint_t *prev_node; /*stock de l'adresse du noeud avant l'insertion*/
	dlistint_t *next_node; /*stock de l'adresse du noeud après l'insertion*/
	dlistint_t *temp = *h; /*tête de lecture qui part de h et se déplace dans la liste*/
	dlistint_t *new_node; /*adresse du nouveau noeud à insérer*/
	dlistint_t **ptr; /*pointeur sur le temp pour utiliser dans la fonction d'ajout de noeud*/

	if (*h == NULL || idx == 0) /*si la liste n'existe pas (NULL) ou on veut insérer
								au premier élément (idx 0) on utilise la fonction
								qui créer au début de la liste
								(elle gère le cas où la liste est vide)*/
		return (add_dnodeint(h, n));

	while (index < idx)	/*sinon, on parcours la liste jusqu'à l'index voulu*/
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next; /*la tête se déplace d'un élément à chaque tour*/
		index++; /*on compte chaque déplacement pour comparer à l'index
				on veut se poser sur l'élément après l'insertion
				Après chaque tour, il faut vérifier si temp est NULL !
				Si c'est le cas, ça signifie qu'on a voulu insérer hors de la
				liste existante*/
	}
	if (temp == NULL)
		return(add_dnodeint_end(h, n));
	/* cette condition est importante et difficile à comprendre
	Si on veut insérer à la fin d'une liste, comme on se pose après l'insertion, on va arriver sur temp=NULL
	La condition de boucle est atteinte ; on y entre pas et le temp ==NULL de while n'est pas lu.
	On est pas out range, on est après la fin pour insérer à la fin.
	Là, on fait la fonction qui ajoute à la fin de la liste.*/
	next_node = temp; /*dans mon futur noeud, le next sera égal à l'adresse où se trouve ma tête de lecture*/
	prev_node = temp->prev; /*dans mon futur noeud, le prev sera égal au prev où se trouve ma tête de lecture*/

	ptr = &temp; /*j'initialise mon pointeur de pointeur avec l'adresse avant laquelle j'insert*/
	new_node = add_dnodeint(ptr, n); /*je met l'adresse du nouveau noeud dans mon pointeur new_node*/
	new_node->prev = prev_node; /*j'attribue sa valeur prev*/
	new_node->next = next_node;/*j'attribue sa valeur next*/
	prev_node->next = new_node; /*je modifie le next du noeud d'avant pour qu'il pointe sur mon nouveau noeud*/
	next_node->prev = new_node;/*je modifie le prev du noeud d'après pour qu'il pointe sur mon nouveau noeud*/

	return (new_node);
}
