#include "main.h"

/**
 * print_last_digit - gives absolute value of an int
 * @i : takes an int value
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: last digit
 */
int print_last_digit(int i)
{

	int ld = i % 10;

	if (i < 0)
	{
		_putchar('0' + (ld * -1));
		return (ld * -1);
	}
	else
	{
		_putchar('0' + ld);
		return (ld);
	}
}
