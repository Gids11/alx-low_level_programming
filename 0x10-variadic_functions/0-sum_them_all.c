#include "variadic_functions.h"

/**
 * sum_them_all - adding up numbers
 * @n: the enumbers
 *
 * Return: If n == 0, return 0, otherwise return the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list p;

	va_start(p, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(p, unsigned int);
	va_end(p);
	return (sum);
}

