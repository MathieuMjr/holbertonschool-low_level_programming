#include "main.h"

/**
 * print_square - print a diagonal
 * @size: size of the square
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void print_square(int size)
{
	int m;
	int t;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 1; t <= size ; ++t)
		{
			for (m = 1; m <= size; ++m)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
