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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else if (m  == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	return (0);
}
