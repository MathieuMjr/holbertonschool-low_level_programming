#include "variadic_functions.h"

/**
 * print_strings - function that prints n strings
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
	const char *str;

	va_start(args, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; ++i)
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			printf("%s", "(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
