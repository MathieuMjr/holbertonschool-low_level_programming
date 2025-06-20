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
	int i = 0;
	int j = 0;

	for (i = 0; i = 23; ++j)
{
	fr (j = 0; j <= 59; ++j)
		{
			if (i <= 9 && j <= 9)
			{
				_putchar('0');
				_putchar('0' + i);
				_putchar(58);
				_putchar('0' + j);
			}
			else if (i <= 9 && j >= 10)
			{
				_putchar('0');
				_putchar('0' + i);
				_putchar(58);
				_putchar('0' + j);
			}
			else if (i >= 10 && j <= 9)
			{
				_putchar('0' + i);
				_putchar(58);
				_putchar('0');
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + i);
				_putchar(58);
				_putchar('0' + j);
			}
		}
	}
}
