#include "main.h"

/**
 * print_sign - is it a letter or not
 * @n : is an int
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 1 if n greater than 0, 0 if n == 0, -1 if n < 0
 */
int print_sign(int n)
{
	/**
	 * ici on a dÃja dÃfini e
	 * le paramÃtre serait un int c
	 * si j'ecris char c, je vais
	 * masquer la valeur entree
	 * en parametre
	 */

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('+');
		return (1);
	}
}
