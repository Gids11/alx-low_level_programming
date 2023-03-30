#include "main.h"
#include <string.h>

/**
 * *_strncpy - A function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: size of bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
