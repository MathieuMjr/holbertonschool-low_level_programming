#include "main.h"

/**
 * times_table - print times table
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */

void times_table(void)
{
	int m, n, o;

	for (m = 0; m <= 9; ++m)
	{
		for (n = 0; n <= 9; ++n)
		{
			o = m * n;
			if (n == 0)
			{
				_putchar('0' + o);
				_putchar(',');
			}
			else if ((o <= 9) || (m == 0 && n != 0))
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + o);
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar('0' + (o / 10));
				_putchar('0' + (o % 10));
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
