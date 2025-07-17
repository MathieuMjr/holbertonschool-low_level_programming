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
 * struct type - structure that list
 * type of arg and pointer to the function
 * we need to use to print it
 *
 * @letter: Letter code standing for a data type
 * @f: Function that print args of the data type given by letter
 */
struct type
{
	char *letter;
	void (*f)(va_list);
};

#endif
