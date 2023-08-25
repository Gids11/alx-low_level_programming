#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks systems Byte order
 * Return: Returns 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	int a;
	int if_big;

	a = 1;
	if_big = (int) (((char *)&a)[0]);
	return (if_big);
}
