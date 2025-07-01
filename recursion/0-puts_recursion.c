#include "main.h"

/**
 * _puts_recursion - put a string recursive way
 * @s: point the adress of a string
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
	++i;
		_puts_recursion(s + i);
	}
	else
	{
		_putchar('\n');
	}
}
