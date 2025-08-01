#include "main.h"

/**
 * prime_number_med - look for a number other than 1 or n
 * that divide n ; if yes, it's not a prime number
 * @i: the divider you wants to test
 * @n: the number you want to know if it's a prime number
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 1 if prime number, 0 if not
 */
int prime_number_med(int i, int n)
{
	if (n % i == 0) // Si n est divisible par i sans reste → n n’est pas premier
	{
		return (0);
	}
	else if (i * i > n) // Si i dépasse √n, aucun diviseur trouvé → n est premier
	{
		return (1);
	}
	else // Sinon, on continue à tester avec i + 1
	{
		return (prime_number_med(i + 1, n));
	}
}
/**
 * is_prime_number - use prime_number_med to test
 * if there any other dividers than 1 or n
 * @n: the number you want to know if it's a prime number
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 1 if prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1) // Les nombres <= 1 ne sont pas premiers
	{
		return (0);
	}
	return (prime_number_med(2, n)); // Appel du helper en commençant par i = 2
}
