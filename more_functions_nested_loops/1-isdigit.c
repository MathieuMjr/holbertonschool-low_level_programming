#include "main.h"

/**
 * _isdigit - tells you if it's a digit or not
 * @c : takes an int value
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	if (c >= 48 && c <= 57)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
