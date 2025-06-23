#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int t;

	for (t = 0; t <= 10; ++t)
	{
		for (i = 0; i <= 14; ++i)
		{
			if (i / 10 != 0)
			{
				_putchar('0' + (i / 10));
			}
			_putchar('0' + (i % 10));
		}
	_putchar('\n');
	}
}
