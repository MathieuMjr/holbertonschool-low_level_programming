#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: an int that is the size of triangle
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int m;
	int n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; ++i)
		{
			/* Autre technique
			for (j = 1; j <= size; j++)
			{
				if (j <= size - i)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
			}
		}
	}
}
		*/
			for (m = 0; m < size - i; ++m)
			{
				_putchar(' ');
			}
			for (n = 1; n <= i; ++n)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
