#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - freeing space allocated to the dog
 * @d: the dog
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(0);
	else
		free((*d).name);
	free((*d).owner);
	free(d);
}
