#include "main.h"

/**
 * _pow_recursion - gives you any number raised to any power
 * @x: the number you want to raised
 * @y: the power
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: result of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		// Cas de base : tout nombre élevé à la puissance 0 vaut 1
		return (1);
	}
	else if (y < 0)
	{
		// Cas d'erreur : la fonction ne gère pas les exposants négatifs
		return (-1);
	}
	else
	{
		// Appel récursif : x^y = x * x^(y-1)
		return (x * _pow_recursion(x, y - 1));
	}
}
