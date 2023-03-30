#include "main.h"
#include <stdio.h>

/**
 * reverse_array - This function reverses the content of an array of integers.
 * @a: The array of integers
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int d, i;

		for (i = n - 1; i >=  n / 2; i--)
		{
			d = a[n - 1 - i];
			a[n - 1 - i] = a[i];
			a[i] = d;
		}
}
