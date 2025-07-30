#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at index
 * @head: adress of the 1st node of the list
 * @index: position of the node in the list
 * you want the adress
 *
 * Return: adress of the node at the wanted index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0; 
	/*ce compteur sert à limiter les tours de boucles*/
	dlistint_t *h = head;
	/*ce pointeur permet de se déplacer dans la liste
	sans modifier le pointeur de tête à la fin de la fonction*/

	if (index == 0)
		return (head);
	/*si on veut l'index 0, me 1er element
	on donne la tête directement - la boucle while
	ne démarre pas si index == 0*/
	while (i < index)
	{
		h = h->next;
		if (h == NULL)
			return (NULL);
		i++;
	}
	/*si jamais h est NULL, c'est qu'on a dépassé les limites
	de la liste !*/
	/*i < index car sinon, h va essayer de se déplacer sur
	le noeud suivant.*/

	return (h);
}
