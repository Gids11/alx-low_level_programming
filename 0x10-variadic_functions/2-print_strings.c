#include "variadic_functions.h"

/**
 * print_strings - printing strings with separator
 * @separator: the separator to use
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *string;
		unsigned int i;

		va_start(s, n);
		for (i = 0; i < n; i++)
		{
			string = va_arg(s, char *);
				if (string == NULL)
					printf("(nil)");
				else
					printf("%s", string);
			if (i != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		printf("\n");
		va_end(s);
}

