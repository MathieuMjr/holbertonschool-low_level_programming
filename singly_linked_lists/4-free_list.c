#include "lists.h"

/**
 * free_list- free allocated memory for a list
 * @head: adress of a pointer that point the first element
 * of a list.
 */
void free_list(list_t *head)
{
	list_t *h = head;
	list_t *temp;

	while (h != NULL)
	{
		temp = h->next;
		free(h->str);
		free(h);
		h = temp;
	}
}
