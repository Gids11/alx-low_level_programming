#include <stdio.h>
/**
 * get_bit - gives a value at a given index
 * @n: Number
 * @index: The index to search
 * Return: A value at a given index or -1 if an error occours
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (index > (sizeof(8) * 8))
		return (-1);
	for (a = 0; a < index; a++)
		n = n >> 1;
	return ((n & 1));
}

