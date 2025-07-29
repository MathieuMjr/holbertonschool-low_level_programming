#include "lists.h"

/**
 * add_node_end - create a new node at the end of a list
 * @head: adress of a pointer that point the first element
 * @str: a string of characters standing for the str member
 *
 * Return: a pointer to the newly created node
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
