#include "variadic_functions.h"

/**
 * print_numbers - function that prints n numbers
 * with a separator
 * @separator: char you want to use as separator
 * @n: number of undefined arguments
 *
 * Return: nothing
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
		separator = "";
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
