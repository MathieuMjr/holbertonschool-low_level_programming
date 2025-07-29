#include "lists.h"

/**
 * free_dlistint- free allocated memory of a list
 * @head: adress of a pointer that point the first element
 * of a list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
