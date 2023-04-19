#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: the array
 * @cmp: pointer to the function
 * @size: size of the array
 *
 * Return: If no element matches, return -1, If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int j;

if (array == NULL || cmp == NULL)
return (-1);
for (j = 0; j < size; j++)
{
if (cmp(array[j]) != 0)
return (j);
}
return (-1);
}
