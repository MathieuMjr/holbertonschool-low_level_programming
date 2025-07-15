#include "3-calc.h"

/**
 * get_op_func - gives a function pointer
 * according to what is given in arg
 * @s: symbole of the operator
 *
 * Return: pointer to function if a match is
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = /* un array de variables ?*/
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		++i;
	}
	return (NULL);
}
