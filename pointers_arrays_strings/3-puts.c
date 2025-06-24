#include "main.h"

/**
 * _puts - count string of char lenght
 * @str: adress of a char var
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
