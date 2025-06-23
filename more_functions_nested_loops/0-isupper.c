#include "main.h"

/**
 * _isupper - tells you if it's uppercase or not
 * @c : takes an int value
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
	{
		i = 1;
	}
	else if (c >= 'a' && c <= 'z')
	{
		i = 0;
	}
	return (i);
}
