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
	
	for (i = 0; i <= 14; ++i)
	{
		if (i /10 != 0)
		{
			_putchar('0' + (i / 10));
		}
		_putchar('0' + (i % 10));
	}
	_putchar('\n');
}
