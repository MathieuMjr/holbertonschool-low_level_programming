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
	int i;

	for (i = 48; i <= 57; ++i)
	{
		if (i == 57)
		{
			putchar (i);
		}
		else	
		{
			putchar(i);
			putchar(44);
		}	
	}
	putchar(10);
	return (0);
}
