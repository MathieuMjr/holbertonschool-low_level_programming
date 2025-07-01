#include "main.h"

/**
 * _print_rev_recursion - put a string backward
 * @s: point the adress of a string
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{

	}
	else
	{
		_print_rev_recursion(s + 1);
			_putchar(*s);
	}
}
