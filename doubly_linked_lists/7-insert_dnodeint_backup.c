#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node
 * à index idx
 * @h: adress of head
 * @idx: index of the node you want to insert
 * before
 * @n: value you want to the new node n
 *
 * Return: pointer to the new node created
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0; /*va permettre de contrôler le nombre de déplacement
							dans la liste*/
	dlistint_t *node_prev; /*on stockera l'adresse qui sera avant notre nouveau noeud*/
	dlistint_t *node_next;	/*on stockera l'adresse qui sera après notre nouveau noeud*/
	dlistint_t *temp = *h;	/*on copie l'adresse de la tête*/
	dlistint_t *new_node;	/*on prépare un pointeur pour pointer vers le nouveau noeud*/

	if (*h == NULL)
		return (add_dnodeint(h, n));
	/*si la liste n'existe pas, la fonctio add_dnodeint peut gérer*/
	/*attention toutefois... si on essaie d'insérer à un index > 0
	dans une liste vide ? ...*/
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	/*si l'index vaut 0, il faut inséré avant la tête
	ce que fait très bien add_dnodeint. Mais notre boucle
	while ne gère pas ce cas*/
	while (index < idx - 1)
	{
		if (temp == NULL)/*si on a dépassél a liste, il faut retourner null*/
			return (NULL);
		temp = temp->next;
		index++;
	}
	/*on va parcourir la liste depuis la tête
	Et s'arrêter avant l'insertion.*/
	if (temp == NULL)
		return (NULL);
	/*au dernier tour de boucle, j'ai incrémenté index. MAIS
	il ne respecte plus la condition d'entrée. Conséquence, il faut 
	retester si temp est null, car il était vérifié dans la boucle seulement.
	J'aurai préféré que la boucle s'arrête avant...*/
	node_prev = temp; /*comme temp s'arrête avant l'insertion
						temp est l'adresse avant l'insertion*/
	node_next = temp->next; /*le noeud qui suivra l'insertion
							sera le noeud vers lequel pointe temp !*/

	new_node = malloc(sizeof(dlistint_t)); /* allocation mémoire*/
	if (new_node == NULL) /*vérification de la réussite de l'allocation*/
		return (NULL);
	new_node->prev = node_prev; /*le nouveau noeud pointe en prev vers temp (node_prev)*/
	new_node->next = node_next;/* le nouveau noeud pointe en next vers node_next*/
	new_node->n = n;
	node_prev->next = new_node;/*le noeud avant celui qu'on a inséré doit pointer vers le nouveau noeud*/
	if (node_next != NULL)			/* le noeud suivant l'insertion doit exister !*/
		node_next->prev = new_node;	/*si c'est bien le cas il doit pointer en prev vers le nouveau noeud*/
									/* si non... ?*/
	return (new_node);
}
