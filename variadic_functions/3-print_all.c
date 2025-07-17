#include "variadic_functions.h"

/**
 * type_char - function that print an undefined
 * arg that is a char
 * @args: arg to print
 *
 * Return:
 */
void type_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * type_int - function that print an undefined
 * arg that is an int
 * @args: arg to print
 *
 * Return:
 */
void type_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * type_float - function that print an undefined
 * arg that is a float
 * @args: arg to print
 *
 * Return:
 */
void type_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * type_string - function that print an undefined
 * arg that is a string
 * @args: arg to print
 *
 * Return:
 */
void type_string(va_list args)
{
	const char *s = va_arg(args, char*);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - function that print undefined amount
 * of args, no matter the type it got
 * @format: string of char
 * eache letter should be the type of and undefined
 * arg.
 *
 * Return:
 */
void print_all(const char * const format, ...)
{
	/**
	* struct type - structure that list
	* type of arg and pointer to the function
	* we need to use to print it
	 *
	* @letter: Letter code standing for a data type
	* @f: Function that print args of the data type given by letter
	*/
	struct type type[] = {
		{"c", type_char},
		{"i", type_int},
		{"f", type_float},
		{"s", type_string},
		{NULL, NULL}
	};

	int k = 0;
	char *separator = "";

	va_list args;

	va_start(args, format);

	while (format != NULL && format[k] != '\0')
	{
		int j = 0;

		while (type[j].letter != NULL)
		{
			if (format[k] == type[j].letter[0])
			{
				printf("%s", separator);
				type[j].f(args);
				separator = ", ";
			}
			++j;
		}
		++k;
	}
	printf("\n");
}
