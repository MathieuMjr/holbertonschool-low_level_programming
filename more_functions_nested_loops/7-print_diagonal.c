#include "main.h"

/**
 * print_diagonal - print a diagonal of \
 * @n : an int that tells you how many time you print "_"
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void print_diagonal(int n)
{
	int m;
	int t;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
	for (t = 1; t < n + 1 ; ++t)
		{
		if (t == 0)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			for (m = 1; m < t; ++m)
				{
				_putchar(' ');
				}
			_putchar('\\');
			_putchar('\n');
		}
		}
	}
}
