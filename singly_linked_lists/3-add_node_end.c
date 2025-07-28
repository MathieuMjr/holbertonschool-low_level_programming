#include "lists.h"

/**
 * add_node_end - create a new node at the end of a list
 * @head: adress of a pointer that point the first element
 * @str: a string of characters standing for the str member
 *
 * Return: a pointer to the newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int k = 0;
	list_t *h = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
		new->str = strdup(str);
		while (str[k] != '\0')
			++k;
		new->len = k;
		new->next = NULL;
	return (new);
}
