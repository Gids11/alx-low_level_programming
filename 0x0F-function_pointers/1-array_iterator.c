#include "function_pointers.h"
/**
 * array_iterator - A  function that executes a function given as a
 * parameter on each element of an array.
 * @size: size of array
 * @action: pointer to the function
 * @array: the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		exit(0);
	for (i = 0; i < size; i++)
		action(array[i]);
}

