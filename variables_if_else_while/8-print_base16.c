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
	char c;

	for (c = 48; c <= 57; ++c)
	{
		putchar(c);
	}
	for (c = 97; c <= 102; ++c)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
