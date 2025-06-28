#include "main.h"

/**
 * cap_string - capitalizes all words.
 * @str: Pointer to a string to capitalize.
 (*
 * Description: all words are capitalized according to a list
 * of separators
(* section header: Contains)*
 * Return: the string modified
 */
char *cap_string(char *str)
{
	int i = 1;
	int j;
	char s[14] = {'\n', ',', '\t', ' ', ';', '!', '?', '"', '(', ')',
		'{', '}', '.'};

	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122))
		{
			for (j = 0; j <= 14; ++j)
			{
				if (str[i - 1] == s[j])
				{
					str[i] = str[i] - 32;
				}
			}
		}
		++i;
	}
	return (str);
}
