#include "lists.h"

/**
 * add_node - create a new node at the beginning of a list
 * @head: adress of a pointer that point the first element
 * @str: a string of characters standing for the str member
 *
 * Return: a pointer to the newly created node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (head == NULL)
	{
		new->str = strdup(str);
		while (str[i] != '\0')
		{
			++i;
		}
		new->len = i;
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->str = strdup(str);
		while (str[i] != '\0')
		{
			++i;
		}
		new->len = i;
		new->next = *head;
		*head = new;
	}
	return (*head);
}
