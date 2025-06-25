#include "main.h"

/**
 * print_array - print values in an array
 * @a: adress of an array
 * @n: number of values of this array you want to print
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); ++i)
	{
		if ( i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
