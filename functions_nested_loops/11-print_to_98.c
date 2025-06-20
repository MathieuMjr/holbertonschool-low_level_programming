#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers until 98, even negatives one
 * until 98
 * @n : number to begin with
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; --i)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
			printf("%d\n", i);
			}
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (i = n; i <= 98; ++i)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
}
