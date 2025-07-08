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
/* Traite les pointeurs NULL comme des chaînes vides */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calcule la longueur de s1 */
	while (s1[i] != '\0')
		++i;

	/* Calcule la longueur de s2 */
	while (s2[k] != '\0')
		++k;

	/* Si n est plus grand que la longueur de s2, on prend toute s2 */
	if (n > k)
	{
		/* Alloue la mémoire nécessaire pour s1 + s2 complète + '\0' */
		str = malloc((i + k + 1) * sizeof(char));
		n = k; /* ajuste n pour ne pas dépasser la longueur de s2 */
	}
	else
	{
		/* Alloue la mémoire nécessaire pour s1 + n caractères de s2 + '\0' */
		str = malloc((i + n + 1) * sizeof(char));
	}

	/* Vérifie si l'allocation a échoué */
	if (str == NULL)
		return (NULL);

	/* Copie les caractères de s1 dans la nouvelle chaîne */
	for (j = 0; j < (i + n); ++j)
	{
		if (j < i)
			str[j] = s1[j];
		else
			str[j] = s2[j - i]; /* Copie les n premiers caractères de s2 */
	}

	/* Termine la chaîne par un caractère nul */
	str[i + n] = '\0';

	return (str);
}
