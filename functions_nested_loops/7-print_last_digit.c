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

	int ld;
	if (i < 0)
	{
		ld = (i * -1) % 10;
		_putchar('0' + ld);
		return (ld);
	}
	else
	{
		ld = (i % 10);
		_putchar('0' + i % 10);
		return (i % 10);
	}
}
