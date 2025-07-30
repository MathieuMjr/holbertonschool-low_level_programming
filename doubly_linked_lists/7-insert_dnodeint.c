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
	unsigned int index = 0;
	dlistint_t *prev_node;
	dlistint_t *next_node;
	dlistint_t *temp = *h;
	dlistint_t *new_node;
	dlistint_t **ptr;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));

	while (index < idx)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		index++;
	}
	if (temp == NULL)
		return(add_dnodeint_end(h, n));
	next_node = temp;
	prev_node = temp->prev;

	ptr = &temp;
	new_node = add_dnodeint(ptr, n);
	new_node->prev = prev_node;
	new_node->next = next_node;
	prev_node->next = new_node;
	next_node->prev = new_node;

	return (new_node);
}
