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
	dlistint_t *idx_prev;
	dlistint_t *idx_next;
	dlistint_t *temp = *h;
	dlistint_t *new_node;
	dlistint_t **ptr;

	while (index <= idx)
	{
		if (h == NULL)
			return (NULL);
		if (index == idx - 1)
			idx_prev = temp;
		if (index == idx)
			idx_next = temp;
		temp = temp->next;
		index++;
	}
	ptr = &temp;
	new_node = add_dnodeint(ptr, n);
	if (new_node == NULL)
		return (NULL);
	new_node->prev = idx_prev;
	new_node->next = idx_next;
	idx_prev->next = new_node;
	idx_next->prev = new_node;
	return (new_node);
}
