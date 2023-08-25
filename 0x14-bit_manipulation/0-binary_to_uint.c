#include "main.h"

/**
 * binary_to_uint -  printing binary number unsigned integer
 * @b: String of binary numbers
 * Return: The converted number or 0 if b is NULL or if there are chars
 * that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int lent;
	unsigned int c;
	unsigned int d;
	unsigned int sum;
	unsigned int power;
	int bas;

	bas = 2;
	sum = 0;
	power = 1;
	if (b == NULL)
		return (0);
	for (lent = 0; b[lent] != '\0'; lent++)
		;
	if (lent == 1 && (b[0] == '0' || b[0] == '1'))
		return ((b[0] - 48));
	for (c = 0; b[c] != '\0'; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		for (d = lent - 1; d > 0; d--)
			power = power * bas;
		sum = sum + (power * (b[c] - 48));
		lent--;
		power = 1;
	}
	return (sum);
}
