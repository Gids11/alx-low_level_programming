#include "main.h"
#include <stdio.h>

/**
 * reverse_array - This function reverses the content of an array of integers.
 * @a: The array of integers
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;

		for (i = 0; i < n; i++)
		printf("%d", *a--);
}
