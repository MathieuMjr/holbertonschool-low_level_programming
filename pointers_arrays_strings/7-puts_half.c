#include "main.h"

/**
 * puts_half - print numbers the second half of a string
 * @str: adress of a char var
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		++i;
	}
	if (i % 2 == 0)
	{
		for (j = (i / 2); j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (i + 1) / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
