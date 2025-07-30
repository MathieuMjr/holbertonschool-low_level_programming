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
	dlistint_t *h = head;

	if (index == 0)
	{
		return (head);
	}
	while (i < index)
	{
		h = h->next;
		i++;
	}
	return (h);
}
