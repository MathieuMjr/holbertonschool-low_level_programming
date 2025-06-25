#include "main.h"

/**
 * puts2 - print numbers of a string if it's an even number
 * @str: adress of a char var
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: void
 */
void puts2(char *str)
{
	int i = 0; /*compteur pour while : donnera la longueur de la string*/
	int j; /*compteur pour for */

	while (str[i] != '\0')
	{
		++i;
	}
	for (j = 0; j <= i; ++j)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
