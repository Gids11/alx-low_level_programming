#include "variadic_functions.h"
#include <stdarg.h>

void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_char(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_int - printing integer
 * @arg: arguments passed
 */
void print_int(va_list arg)
{
	int in;

	in = va_arg(arg, int);
	printf("%d", in);
}

/**
 * print_float - printing floats
 * @arg: arguments passed
 */
void print_float(va_list arg)
{
	float fl;

	fl = va_arg(arg, double);
	printf("%f", fl);
}

/**
 * print_char - printing character
 * @arg: arguments passed
 */
void print_char(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	printf("%c", ch);
}

/**
 * print_string - printing string
 * @arg: arguments passed
 */
void print_string(va_list arg)
{
	char *str;

		str = va_arg(arg, char *);
		if (str == NULL)
		{
			printf("(nil)");
			return;
		}
		printf("%s", str);
}

/**
 * print_all - priting all types
 * @format: list of types of argument passed
 * @...: number of arguments varying in type
 */
void print_all(const char * const format, ...)
{
	va_list arg;
		int a = 0, b;
		char *separator = "";
		printings funcs[] = {
			{"c", print_char},
			{"s", print_string},
			{"i", print_int},
			{"f", print_float}
		};
		va_start(arg, format);
		while (format && (*(format + a)))
		{
			b = 0;
		while (b < 4 && (*(format + a) != *(funcs[b].symb)))
			b++;
		if (b < 4)
		{
			printf("%s", separator);
			funcs[b].print(arg);
			separator = ", ";
		}
		a++;
		}
		printf("\n");
		va_end(arg);
}

