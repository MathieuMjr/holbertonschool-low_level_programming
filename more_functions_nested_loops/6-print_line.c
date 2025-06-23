#include "main.h"

/**
 * print_line - print line n time long with _
 * @n : an int that tells you how many time you print "_"
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
