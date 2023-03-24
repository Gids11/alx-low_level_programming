#include "main.h"

/**
 * print_numbers - printing numbers 0 - 9 followed by a new line
 *
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar((n % 10) + '0');
	_putchar('\n');
}
