#include "main.h"
#include <stdlib.h>

/**
 * *create_array -  an array of chars, and initializes it with a specific char
 * @size: memory size
 * @c: the specific char
 *
 * Return: NULL if size is 0, pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
