#include "main.h"

/**
 * print_chessboard - print a chessboard of 8 x 8
 * @a: is a pointer to an array of 8
 (*
 * Description:
(* section header: Contains)*
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; ++i)
	{
		for (j = 0; j < 8; ++j)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
