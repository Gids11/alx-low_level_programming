#include "main.h"
#include <string.h>
/**
 * *_strncat - A function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: size of source bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
