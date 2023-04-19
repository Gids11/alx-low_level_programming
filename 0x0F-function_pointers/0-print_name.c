#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - a function that prints a name
 * @name: the name
 * @f: a pointer to the function 
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		exit(0);
	f(name);
}
