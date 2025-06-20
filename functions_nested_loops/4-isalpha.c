#include "main.h"

/**
 * _isalpha - is it a letter or not
 * @c : is an int
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 1 is lowercase, 0 otherwise
 */
int _isalpha(int c)
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
	else if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	return (0);
}
