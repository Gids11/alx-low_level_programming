#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a fucntion that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to allocate
 *
 * Return: NULL if the fucntion fails
 * otherwise, 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		n++;
	concat = malloc(sizeof(char) * (n + 1));
	if (concat == NULL)
		return (NULL);
	n = 0;
	for (i = 0; s1[i]; i++)
		concat[n++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		concat[n++] = s2[i];
	concat[n] = '\0';
	return (concat);
}
