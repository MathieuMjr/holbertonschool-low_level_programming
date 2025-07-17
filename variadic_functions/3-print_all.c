#include "variadic_functions.h"

void type_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
void type_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
void type_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
void type_string(va_list args)
{
	printf("%s", va_arg(args, char*));
}

/*void (*get_data_type(char *s))
{
	int i = 0;

	struct type type[] =
	{
		{"c", type_char},
		{"i", type_int},
		{"f", type_float},
		{"s", type_string},
		{NULL, NULL}
	};

	while (type->letter[i] != NULL)
	{
		if (strcmp(type->letter[i], s) == 0)
		{
			return(type->f);
		}
	}
}*/

void print_all(const char * const format, ...)
{
	struct type type[] =
	{
		{"c", type_char},
		{"i", type_int},
		{"f", type_float},
		{"s", type_string},
		{NULL, NULL}
	};

	int k = 0;
	char *separator ="";
 
	va_list args;

	va_start(args, format);

while (format[k] != '\0')
	{
		int j = 0;
		
		while (format != NULL && type[j].letter != NULL)
		{
			if (format[k] == type[j].letter[0])
			{
				printf("%s", separator);
				type[j].f(args);
			}
			
			++j;
		}
		separator = ", ";
		++k;
		
	}
	printf("\n");
}
