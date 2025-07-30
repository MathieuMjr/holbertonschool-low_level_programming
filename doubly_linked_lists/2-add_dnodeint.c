#include "lists.h"

/**
 * add_dnodeint - create a new node in a list
 * a the beginning.
 * @head: adress of the 1st node of the list
 * @n: data value to put in the new element
 *
 * Return: return a pointer to the
 * new node of the list (head element)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = *head;
	/*je copie l'adresse de la tête dans un pointeur*/
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL) /*malloc a réussi ? si non, retourne NULL*/
		return (NULL);

	if (*head != NULL)
	{
		h->prev = new;
	}
	/*si une liste existe, on va insérer avant la tête
	Il faut modifier le champs "previous" de la tête donnée
	au début pour qu'elle pointe vers notre nouveau noeud*/
	new->n = n;
	new->prev = NULL; /*notre nouveau noeud devient le 1er de la liste*/
	new->next = *head;/*l'élément suivant était le 1er au début, donc la head*/
	*head = new;/*la nouvelle head est mise sur notre nouveau (1er) noeud*/
	return (*head);
}
