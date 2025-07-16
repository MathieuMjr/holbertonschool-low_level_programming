#include "variadic_functions.h"

/**
 * sum_them_all - function that does the sum
 * of n undefined arguments
 * @n: number of undefined arguments
 *
 * Return: sum of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	/* args : le nom de la liste*/
	/* n : le dernier paramètre déclaré dans la fonction*/

	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1)
		{
			printf("%s", separator);
		}
		else
		{
			printf("\n");
		}
	}
}
