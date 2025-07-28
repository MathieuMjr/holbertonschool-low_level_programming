#include "lists.h"

/**
 * print_list - print every element of a list
 * @h: is a pointer to 1st element of a list
 *
 * Return: the number of element printed
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h->next != NULL; ++i)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (i + 1);
}
