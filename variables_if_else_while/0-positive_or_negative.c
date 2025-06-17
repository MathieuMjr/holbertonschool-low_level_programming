#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Is the entry point
 * of my program
 * @void
(*
 * Description: Compilator will look for
 * it to start)?
(* section header: will call stdio library)*
 * Return: if sucess, will return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
