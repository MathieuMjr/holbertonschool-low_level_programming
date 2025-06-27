#include "main.h"

/**
 * string_toupper - takes a given string and return the same string but in
 * upper case
 * @str: Pointer to string.
 (*
 * Description: check if characters are lowercase and if so,
 * turn it into uppercase
(* section header: Contains)*
 * Return: the string in upper case
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] <= 122 && str[i] >= 97)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			str[i] = str[i];
		}
	++i;
	}
	return (str);
}
