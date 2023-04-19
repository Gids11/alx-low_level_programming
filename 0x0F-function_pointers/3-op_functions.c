#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - addition function
 * @a: first number
 * @b: second number
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	sum = (a + b);
	return (sum);
}

/**
 * op_sub - subtraction function
 * @a: first number
 * @b: second number
 *
 * Return: the difference
 */
int op_sub(int a, int b)
{
	diff = (a - b);
	return (diff);
}

/**
 * op_mul - multiplication function
 * @a: first number
 * @b: second number
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	prod = (a * b);
	return (prod);
}

/**
 * op_div - division function
 * @a: first number
 * @b: second number
 *
 * Return: result
 */
int op_div(int a, int b)
{
	quot = (a / b);
	return (quot);
}

/**
 * op_mod - remainder function
 * @a: first number
 * @b: second number
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	mod = (a % b);
	return (mod);
}
