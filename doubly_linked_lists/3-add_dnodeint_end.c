#include "lists.h"

/**
 * add_dnodeint_end - create a new node at the
 * end of a list
 * @head: adress of the 1st node of the list
 * @n: data value to put in the new element
 *
 * Return: return a pointer to the
 * new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	
	if (*head != NULL)
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new;
		new->prev = h;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	new->n = n;
	new->next = NULL;
	return (new);
}
