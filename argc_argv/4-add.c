#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc:  The number of command-line arguments
 * (including the program name).
 * @argv: An array of strings containing the command-line
 * arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int i;             /* Indice pour parcourir les arguments */
	int j;             /* Indice pour parcourir les caractères */
	int sum = 0;       /* Somme des entiers valides */

	for (i = 1; i < argc; ++i) /* On saute argv[0] (nom du programme) */
	{
		for (j = 0; argv[i][j] != '\0'; ++j) /* Vérifie chaque caractère */
		{
			/* Si le caractère n'est pas un chiffre, afficher une erreur */
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");      /* Affiche une erreur */
				return (1);             /* Quitte avec un code d'erreur */
			}
		}
		sum += atoi(argv[i]);           /* Convertit et ajoute à la somme */
	}
	printf("%d\n", sum);               /* Affiche le résultat final */
	return (0);                        /* Quitte le programme avec succès */
}
