#include "variadic_functions.h"

/**
 * sum_them_all - function that does the sum
 * of n undefined arguments
 * @n: number of undefined arguments
 *
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int sum = 0;

	va_start(numbers, n);

	for (i = 0; i < n; ++i)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
