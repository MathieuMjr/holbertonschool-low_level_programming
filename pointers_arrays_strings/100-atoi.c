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
	int minus = 0; /*compteur de "-"*/
	int mi = 0; /*compteur de boucle*/

	while (s[l] != '\0')
	{
		++l;
	}
	for( i = 0; (s[i] < '0' || s[i] > '9'); ++i)
	{
	}
	for (j = i; (s[j] >= '0' && s[j] <= '9') && (j < l); ++j)
	{
	}
	for (k = i; k < j; ++k)
	{
		nbb = nbb * 10 + (s[k] - 48);
	}
	for(mi = 0; (s[mi] < '0' || s[mi] > '9') && mi <= l; ++mi)
	{
		if (s[mi] == '-')
			++minus;
	}
	if (minus % 2 == 1)
	{
		nbb = -nbb; 
	}
	return (nbb);
}
