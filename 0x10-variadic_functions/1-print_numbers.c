#include "variadic_functions.h"
/**
 * print_numbers - printing numbers with a separator
 * @n: the numbers
 * @separator: the separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list pr;
unsigned int i;

va_start(pr, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(pr, unsigned int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(pr);
}
