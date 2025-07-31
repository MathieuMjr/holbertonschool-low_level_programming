#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node
 * at index
 * @head: adress of head
 * @index: index of the node you want to delete
 *
 * Return: pointer to the new node created
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;
	dlistint_t *prev_node;
	dlistint_t *next_node;

	if (*head == NULL) /*si la liste est vide, retourne erreur*/
		return (-1);

	while (temp->next != NULL && i < index) /*la boucle tourne tant qu'on est pas arrivé à l'index
											et tant qu'on a pas dépassé le dernier élément de la liste*/
	{
		temp = temp->next;
		++i;
	}
	if (i < index)
		return (-1); /*si je n'ai pas atteint l'index, c'est qu'on a atteint temp->next == NULL avant
						Donc on s'est arrêté avant la fin de la chaine alors qu'index aurait voulu aller plus loin
						C'est une erreur : on ne peut rien supprimer hors de la chaîne -> retourne -1*/
	prev_node = temp->prev; /*le noeud précédent l'index à supprimer est la valeur indiquée dans le champ prev du noeud à l'index où nous sommes*/
	next_node = temp->next;	/*le noeud suivant l'index à supprimer est la valeur indiquée dans le champ prev du noeud à l'index où nous sommes*/
	if (next_node != NULL)	/*s'il n'y avait pas de noeud suivant (dernier élément de la liste), i lne faut pas essayer d'accéder
							au champs prev d'un prochain noeud (il n'y en a pas) -> segfault sinon*/
		next_node->prev = prev_node; /*s'il y a un noeud suivant, il faut que son champs prev pointe vers celui avant le noeud qu'on supprime*/
	if (prev_node != NULL)	/*même chose si on est à la tête : il n'y a pas de noeud précédent
							il ne faut pas essayer de modifier le next d'un noeud précédent qui n'existe pas*/
		prev_node->next = next_node; /*s'il y a un noeud précédent, il faut que son champs next pointe vers le noeud qui suis celui qu'on supprime*/
	if (index == 0) /*si on veut supprimer le noeud de tête, il faut repositionner la nouvelle tête
					sur le noeud suivant, et s'il n'y en a pas car la liste n'a qu'un élément
					eh bien next_node devrait avoir pris la valeur nulle (à la ligne 32)*/
		*head = next_node;
	free(temp);	/*on libère la mémoire allouée pour le noeud à l'index*/
				/*attention, il faut bien comprendre : si on supprime le dernier élément, on a bien fait en sorte que la head pointe vers NULL
				(comme ça, si on tente de supprimer à nouveau cette liste désormais vide, ça retournera -1 (ligne 18)
				Mais à l'adresse vers laquelle pointait head avant, il reste le noeud. Temp a gardé l'adresse en mémoire.
				C'est grâce à lui qu'on va libérer le noeud.*/
	return (1);
}
