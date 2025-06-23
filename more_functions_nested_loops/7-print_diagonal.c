#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: an int number of lines
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
			for (m = 1; m < t; ++m)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

