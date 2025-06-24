#include "main.h"

/**
 * print_rev - print a string backward
 * @s: adress of a char var
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; ++i)
	{
	}
	for (j = i - 1; j >= 0; --j)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
