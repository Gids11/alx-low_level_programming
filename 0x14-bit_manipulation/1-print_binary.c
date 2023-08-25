#include "main.h"

/**
 * print_binary - Prints in binary
 * @n: Number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		prints(n);
}

/**
 * prints - Prints a number in binary
 * @n: the number
 */
void prints(unsigned long int n)
{
	if (n == 0)
		return;
	prints((n >> 1));
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
