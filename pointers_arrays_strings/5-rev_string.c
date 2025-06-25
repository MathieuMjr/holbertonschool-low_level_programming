#include "main.h"

/**
 * rev_string - short description
 * @s: adress of a char var
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	int c;

	while (s[i] != '\0')
	{
		++i;
	}

	for (j = 0; j <= i / 2; ++j)
	{
		c = *(s + j);
		*(s + j) = *(s + (i - (j + 1)));
		*(s + (i - (j + 1))) = c;
	}
}
