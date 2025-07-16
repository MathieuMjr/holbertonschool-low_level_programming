#include "variadic_functions.h"

/**
 * print_numbers - function that prints n numbers
 * with a separator
 * @separator: char you want to use as separator
 * @n: number of undefined arguments
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; ++i)
	{
		/*if (va_arg(args, char*) == NULL)
		{
			printf("%s", NULL),
		}*/
		printf("%s", va_arg(args, char*));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
