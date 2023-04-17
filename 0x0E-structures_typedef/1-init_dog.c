#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializing struct dog
 * @d: the dog in question
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
	}
}
