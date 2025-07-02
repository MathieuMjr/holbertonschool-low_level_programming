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
	int mul;  /* Variable pour stocker le résultat de la multiplication */
	int i;    /* Compteur pour parcourir les arguments */

	(void)argc;  /* Suppression de l'avertissement de variable non utilisée */

	/* Boucle pour compter le nombre d'arguments jusqu'au pointeur NULL */
	for (i = 0; argv[i] != NULL; ++i)
	{
		/* corps vide, juste pour compter */
	}

	/* Vérification du nombre d'arguments */
	if (i > 3 || i <= 2)  /* Si plus de 2 arguments fournis*/
						/*ou un seul (le nom du programme) */
	{
		printf("Error\n");  /* Affiche un message d'erreur */
		return (1);         /* Retourne 1 pour indiquer une erreur */
	}
	else
	{
		/* Convertit les arguments en entiers puis multiplie */
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);  /* Affiche le résultat */
	}

	return (0);  /* Fin du programme avec succès */
}
