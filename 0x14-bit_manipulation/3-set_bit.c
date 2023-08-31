#include "main.h"

/**
 * set_bit - Sets a bit to 1 at a given index.
 * @n: Pointer
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	a = 1;
	a = a << index;
	*n = ((*n) | a);
	return (1);
}

