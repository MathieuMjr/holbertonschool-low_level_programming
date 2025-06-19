#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 */
void print_alphabet_x10(void)
{

	char c;
	int i;

	for (i = 1; i <= 10; ++i)
	{
		for (c = 97; c <= 122; ++c)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
