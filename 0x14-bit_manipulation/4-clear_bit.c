#include "main.h"
/**
 * clear_bit - makes a bit to 0 at a given index.
 * @n: Pointeir
 * @index: Index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	a = 1;
	a = a << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = a ^ *n;

	return (1);
}

