#include "main.h"

#include <unistd.h>
void print_(unsigned long int n);

/**
 * print_binary - Prints in binary
 * @n: Number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_(n);
}

/**
 * print_ - Prints a number in binary
 * @n: the number
 */
void print_(unsigned long int n)
{
	if (n == 0)
		return;
	print_((n >> 1));
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

