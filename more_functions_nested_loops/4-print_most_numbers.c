#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 but not 4 and 2
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; ++i)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
