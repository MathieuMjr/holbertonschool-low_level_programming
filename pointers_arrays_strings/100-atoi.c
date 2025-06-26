#include "main.h"

/**
 * _atoi - takes a string and find numbers in it
 * @s: string of char with numbers in it (or not)
 (*
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: the number
 */
int _atoi(char *s)
{
	int i; /* compteur position 1er chiffre*/
	int j; 	/* Compteur position chiffre de fin*/
	int k;	/* boucle d'action entre les deux positions*/
	int nbb = 0; /* variable accumulant les chiffres voulus*/
	int l = 0; /* compteur de longueur de chaîne*/

	while (s[l] != '\0')
	{
		++l;
	}
		printf("Valeur de l:%d\n", l);
	for( i = 0; (s[i] < '0' || s[i] > '9'); ++i)
	{
	}
		printf("Valeur de i: %d\n", i);
	for (j = i; (s[j] >= '0' && s[j] <= '9') && (j < l); ++j)
	{
	}
		printf("Valeur de j: %d\n", j);
	for (k = i; k < j; ++k)
	{
		nbb = nbb * 10 + (s[k] - 48);
	}
		printf("Valeur de k: %d\n", k);
	if (s[i - 1] == '-' && (s[0] < '0' || s[0] > '9'))
	{
		nbb = -nbb; 
	}
	return (nbb);
}
/* On va essayer d'ajouter les entiers dans un int, à chaque fois il faudra
* multiplier le chiffre en cours par un 10^ ; ça doit pouvoir être un int
* sans être un pointeur*/