#include "main.h"

/**
 * jack_bauer - print every minutes of the day
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: last digit
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23 ; ++h)
	{
		for (m = 0; m <= 59 ; ++m)
		{
			_putchar ('0' + (h / 10));
			_putchar ('0' + (h % 10));
			_putchar (':');
			_putchar ('0' + (m / 10));
			_putchar ('0' + (m % 10));
			_putchar ('\n');
		}
	}
}
