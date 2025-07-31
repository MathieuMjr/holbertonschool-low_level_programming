#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node
 * at index
 * @head: adress of head
 * @index: index of the node you want to delete
 *
 * Return: pointer to the new node created
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;
	dlistint_t *prev_node;
	dlistint_t *next_node;

	if (*head == NULL)
		return (-1);

	while (temp->next != NULL && i < index)
	{
		temp = temp->next;
		++i;
	}
	if (i < index)
		return (-1); /*out range*/
	prev_node = temp->prev;
	next_node = temp->next;
	if (next_node != NULL)
		next_node->prev = prev_node;
	if (prev_node != NULL)
		prev_node->next = next_node;
	if (index == 0)
		*head = next_node;
	free(temp);
	return (1);
}
