#include "main.h"

/**
 * factorial - do factorial
 * @n: int
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: result of factorial n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
