#include "lists.h"

/**
 * print_dlistint - read each element of a doubly linked list
 * @h: adress of the 1st element of the list
 *
 * Return: number of element in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
return (count);
}
