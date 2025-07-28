#include "main.h"

/**
 * _putchar - print a single char on the
 * standard output
 *
 * @c: a character to print
 *
 * Return: number of byte written
 * or -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
	/*
	* write function :
	* 1st arg = 1 : print on the standard output
	* 2nd arg = &c : print what is at c adress
	* 3rd arg = 1 : print 1 octet
	*/
}
