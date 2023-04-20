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
	int sum;

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
	int diff;

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
	int prod;

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
	int quot;

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
	int mod;

	mod = (a % b);
	return (mod);
}
