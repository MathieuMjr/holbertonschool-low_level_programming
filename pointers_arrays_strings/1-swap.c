#include "main.h"

/**
 * swap_int - échange les valeurs de deux pointeurs
 * @a: one pointer
 * @b: another pointer
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
