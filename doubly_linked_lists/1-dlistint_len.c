#include "lists.h"

/**
 * dlistint_len - return the number of element of the list
 * @h: adress of the 1st element of the list
 *
 * Return: number of element in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
