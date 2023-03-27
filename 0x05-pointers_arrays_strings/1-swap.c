#include "main.h"
/**
 * swap_int - Swapping the values of two integers
 * @a: integer 1
 * @b: integer 2
 *
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
