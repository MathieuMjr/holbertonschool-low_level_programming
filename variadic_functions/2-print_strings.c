#include "variadic_functions.h"

/**
 * print_strings - function that prints n strings
 * with a separator
 * @separator: char you want to use as separator
 * @n: number of undefined arguments
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args; /* nommer la lister*/
	unsigned int i; /* création du compteur pour parcourir la lsite*/
	const char *str; /* pointeur qui stocke l'adresse des arguments 
					voir plus loin pourquoi)*/

	va_start(args, n); /* on initialise la liste*/
	if (separator == NULL) /* si rien n'est donné en arguments
							on considère que c'est une chaine vide*/
	{
		separator = "";
	}
	for (i = 0; i < n; ++i)
	{
		str = va_arg(args, char*); 
	/* si on appelle va_arg deux fois 
	1 fois pour savoir si l'argument est NULL
	une autre fois pour l'imprimer s'il ne l'est pas
	Va_arg aura progressé à chaque appel dans la liste !
	
	On le stocke donc dans un pointeur. 
	Ce pointeur doit toujours garder la même adresse, 
	mais sa valeur doit changer. C'est pour ça qu'on indique
	qu'il est constant lors de la déclaration de str
	en le mettant avant le type*/
		if (str == NULL) /* si NULL se trouve à l'adresse de str
						à cette itération de va_arg*/
		{
			printf("%s", "(nil)"); /* imprime nul*/
		}
		else
		{
			printf("%s", str);/* sinon, imprime ce qui est pointé par str*/
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
