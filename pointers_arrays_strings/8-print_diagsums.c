#include "main.h"

/**
 * print_diagsums - print sums of diagonals of a 2d square array
 * @a: Pointer to the 2d array
 * @size: Size of the array
 (*
 * Description:
(* section header: Contains)*
 */
void print_diagsums(int *a, int size)
{
	int i; /*compteur de ligne*/
	int j; /*compteur de colonne*/
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < ((size * size)); i = i + (size + 1))
	{
		sum1 = sum1 + a[i];
	}
		printf("%d,", sum1);
	for (j = (size - 1); j < ((size * size) - 2); j = j + (size - 1))
	{
		sum2 = sum2 + a[j];
	}
		printf(" %d\n", sum2);
}
