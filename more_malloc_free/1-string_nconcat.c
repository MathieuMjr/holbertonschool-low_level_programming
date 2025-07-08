#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - return a pointer to allocated memory
 * or return 98 if fails
 * @b: size of memory space you want to allocate
 * Return: pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j;
	char* str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		++i;
	}
	str = malloc((i + n + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < (i + n); ++j)
	{
		if (j < i)
		{
			str[j] = s1[j];
		}
		else if (s2[j - i] != '\0')
		{
			str[j] = s2[j - i];
		}
		else
		{
			break;
		}
	}
	printf("valeur de j;%d\n", j);
	str[j + 1] = '\0';
	return(str);
}
