#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - returns a string concatenated with
 * n char of another string
 * @s1: pointer to a string of char
 * @s2: pointer to a 2nd string of char you want n char to
 * be concatenated with s1
 * @n: number of char from s2 you want to concatenante with s1
 * Return: pointer to concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int k = 0;
	unsigned int j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		++i;
	while (s2[k] != '\0')
		++k;
	if (n > k)
		str = malloc((i + k + 1) * sizeof(char));
	else

		str = malloc((i + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (j = 0; j < (i + n); ++j)
	{
		if (j < i)
			str[j] = s1[j];
		else if (s2[j - i] != '\0')
			str[j] = s2[j - i];
		else
			break;
	}
	str[i + n] = '\0';
	return (str);
}
