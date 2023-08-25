#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: First number
 * @m: Second number
 * Return: the number of bits you would need to flip to get
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new;
	unsigned long int a;

	new = n ^ m;
	for (a = 0; new > 0;)
	{
		if ((new & 1) == 1)
			a++;
	       new = new >> 1;
	}

	return (a);
}
