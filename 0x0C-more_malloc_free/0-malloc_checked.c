#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Allocating memory using malloc
 * @b: the size needed
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
