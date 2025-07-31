#include "lists.h"
/*NE FONCTIONNE PAS. REPARTI DE 0 SUR 8-DELETE_DNOEINT.C*/
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
	if (index == 0)
	{
		if (temp->next == NULL)
		{
			*head = NULL;
			free(*head);
			return (1);
		}
		temp = temp->next;
		*head = temp;
		free(temp->prev);
		return (1);
	}
	while (i < index)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);
	prev_node = temp->prev;
	next_node = temp->next;
	prev_node->next = temp->next;
	next_node->prev = temp->prev;
	free(temp);
	return (1);
}
