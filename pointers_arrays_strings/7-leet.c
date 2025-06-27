#include "main.h"

/**
 * leet - changes some letters in numbers
 * @str: Pointer to a string to change in leet.
 (*
 * Description: check the chars and change some into letters
(* section header: Contains)*
 * Return: the string modified
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char *u = "AEOTL";
	char *l = "aeotl";
	char *n = "43071";


	while (str[i] != 0)
	{
		for (j = 0; j <= 5; ++j)
		{
			if (str[i] == u[j] || str[i] == l[j])
			{
				str[i] = n[j];
			}
			else
			{
				str[i] = str[i];
			}
		}
		++i;
	}
	return (str);
}
