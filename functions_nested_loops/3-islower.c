#include "main.h"

/**
 * _islower - is it lowercase or not
 * @c : is a char in a int
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 1 is lowercase, 0 otherwise
 */
int _islower(int c)
{
	/**
	 * ici on a d√ja d√fini e
	 * le param√tre serait un int c
	 * si j'ecris char c, je vais
	 * masquer la valeur entree
	 * en parametre
	 */

	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}
