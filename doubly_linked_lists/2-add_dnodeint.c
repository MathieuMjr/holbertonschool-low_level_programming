#include "lists.h"

/**
 * add_dnodeint - create a new node in a list
 * a the beginning.
 * @head: adress of the 1st node of the list
 * @n: data value to put in the new element
 *
 * Return: return a pointer to the
 * new node of the list (head element)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head != NULL)
	{
		h->prev = new;
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (*head);
}
