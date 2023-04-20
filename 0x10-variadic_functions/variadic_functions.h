#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct printing - struct type for printing
 * @symb: data type
 * @print: function pointer
 */
typedef struct printing
{
	char *symb;
		void (*print)(va_list arg);
} printings;

void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

#endif
