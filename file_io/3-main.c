#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s %s\n", av[1], av[2]);
		/*peut être que : Usage: cp file_from file_to est attendu*/
		exit(97);
	}
	res = cp_file(av[1], av[2]);
	dprintf(1,"-> %i)\n", res);
	return (0);
}
