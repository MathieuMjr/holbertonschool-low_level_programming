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
	unsigned int index = 0;
	dlistint_t *idx_node_prev;
	dlistint_t *idx_node_next;
	dlistint_t *temp = *h;
	dlistint_t *new_node;
	dlistint_t **ptr;

	if (*h == NULL)
		return (add_dnodeint(h, n));
	while (index < idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		index++;
	}
	idx_node_prev = temp;
	idx_node_next = temp->next;
	if (idx == 0)
	{
		ptr = h;
		new_node = add_dnodeint(ptr, n);
		return (new_node);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = idx_node_prev;
	new_node->next = idx_node_next;
	new_node->n = n;
	idx_node_prev->next = new_node;
	idx_node_next->prev = new_node;
	return (new_node);
}
