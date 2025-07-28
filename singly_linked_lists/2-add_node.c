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
	/*on alloue la mémoire de la nouvelle variable à venir*/
	/* sa taille est celle de la structure list_t (voir lists.h)*/
	/* on vérifie si l'allocation a fonctionné de suite*/
	if (new == NULL)
	{
		return (NULL);
	}

	/*si head est null, ça signifie qu'il ne pointe vers rien
	comprendre par là que la liste n'existe pas. On créer donc 
	un élément qui sera toujours le dernier de la liste (cOmme par la suite, on ajoutera)
	donc l'adresse du prochain élément est NULL : ce sera le dernier élément de la liste.*/
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
	/* sinon, on créer un nouvel élément
	l'adresse next, vers l'élément précédent
	sera celui qu'on a donné comme étant le premier
	 - celui qui était en head.
	 Enfin, ce nouvel élément devient le premier de la liste
	 car on souhaite toujours ajouter au début de la liste.
	 Donc head doit pointer vers new.*/
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
