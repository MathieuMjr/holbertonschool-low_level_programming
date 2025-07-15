#include "3-calc.h"

/**
 * main - check the code
 * @argc: number of arguments given to the programme
 * @argv: array containing args givent to the programme
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argc;
	if (argv[4] != NULL)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && argv[3] == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	if (strcmp(argv[2], "+") != 0
		&& strcmp(argv[2], "-") != 0
		&& strcmp(argv[2], "*") != 0
		&& strcmp(argv[2], "/") != 0
		&& strcmp(argv[2], "%") != 0)
	{
		printf("%s\n", "Error");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
