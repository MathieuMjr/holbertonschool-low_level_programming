#include <stdio.h>
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

int main(void);
int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif