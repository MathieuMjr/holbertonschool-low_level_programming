#include "main.h"

/**
 * reverse_array - Reverse content of an array
 * @a: Pointer to the destination of an int array.
 * @n: size of this array.
 (*
 * Description: if string 1 is greater than string 2, return a positive
 * number, 0 is they have the same lenght and a negative number otherwise
(* section header: Contains)*
 * Return: a positive number if greater, a negative if less, 0 if equal
 */

void reverse_array(int *a, int n)
{
	int j;
	int c;

		for (j = 0; j < (n / 2); ++j)
		{
			c = a[j];
			a[j] = a[n - j - 1];
			a[n - j - 1] = c;
		}
	}

