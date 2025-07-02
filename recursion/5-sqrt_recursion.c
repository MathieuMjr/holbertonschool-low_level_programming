#include "main.h"

/**
 * sqrt_med - look for a number that raised to two equal to n
 * in _sqrt_recursion
 * @i: the number you want to raised
 * @n: number you are looking for natural square root
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: result the natural square root of n
 */
int sqrt_med(int i, int n)
{
	if ((i * i) == n) // Cas où i² est exactement égal à n → on a trouvé la racine
	{
		return (i);
	}
	if (i > n) // Si i dépasse n sans trouver de carré exact → pas de racine entière
	{
		return (-1);
	}
	else // Sinon, on teste avec le prochain i
	{
		return (sqrt_med(i + 1, n));
	}
}
/**
 * _sqrt_recursion - use sqrt_med to return
 * natural square root of n
 * @n: number you are looking for natural square root
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: result of sqrt_med
 */
int _sqrt_recursion(int n)
{
	return (sqrt_med(0, n)); // Appel du helper en commençant par i = 0
}
