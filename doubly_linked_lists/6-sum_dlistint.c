#include "lists.h"

/**
 * sum_dlistint - does the sum of all data n in the
 * list
 * @head: adress of the 1st node of the list
 *
 * Return: sum of all n or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (h != NULL)
	{
		sum += h->n;
		h = h->next;
	}
	return(sum);
}
