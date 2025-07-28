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

	/*ici pas besoin de compteur de boucle. 
	Quand on le dernier élément de la liste, h->next == NULL
	aka : pas d'adresse vers un prochain élément.
	En faisant h = h->next, on lui donne donc NULL.
	La boucle s'arrête : le pointer n'a plus de valeur. */
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
