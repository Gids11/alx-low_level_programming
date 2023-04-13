#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocating memory block using realloc and free
 * @ptr: the pointer to the memory previously allocated
 * @old_size: size in bytes of allocated space
 * @new_size: size in bytes for realloc
 *
 * Return: If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr). Return NULL, otherwise ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *filler;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = mem;

	for (index = 0; index < old_size && index < new_size; index++)
		filler[index] = *ptr_copy++;

	free(ptr);
	return (mem);
}
