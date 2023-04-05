#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x raised to the
 * power of y
 * @x: number
 * @y: exponent
 *
 * Return: 1 if y < 0, otherwise return final result
 */
int _pow_recursion(int x, int y)
{
int z;

if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
z = x * _pow_recursion(x, y - 1);
return (z);
}
