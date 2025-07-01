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
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
