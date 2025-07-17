#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void (*get_data_type(char *s));
void type_char (va_list args);
void type_int (va_list args);
void type_float (va_list args);
void type_string(va_list args);

/**
 * struct type - associates a format specifier letter with a function
 * to print an argument of that type.
 *
 * @letter: format specifier character as a string.
 * @f: pointer to function that prints an argument of the given type.
 */
typedef struct type
{
	char *letter;
	void (*f)(va_list);
} type_t;

#endif
