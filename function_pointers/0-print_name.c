#include "function_pointers.h"

/**
 * print_name - print a name as is or in upper case
 * @name: name of the person
 * @f: function to print, upper case or not
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
