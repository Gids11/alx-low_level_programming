#include "main.h"
/**
 * factorial - Returning the factorial of a given number
 * @n: the number
 *
 * Return: -1 if n is less than 0, else return factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
		return (1);
	n *=  factorial(n - 1);
	return (n);
}
