#include "lists.h"

/**
 * list_len - returns the number of element in a list
 * @h: is a pointer to 1st element of a list
 *
 * Return: the number of element in a list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
