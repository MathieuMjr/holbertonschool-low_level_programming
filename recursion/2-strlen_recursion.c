#include "main.h"

/**
 * _strlen_recursion - put a string recursive way
 * @s: point the adress of a string
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
