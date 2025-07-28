#include "lists.h"

/**
 * print_list - print every element of a list
 * @h: is a pointer to 1st element of a list
 *
 * Return: the number of element printed
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		++count;
	}
	return (count);
}
