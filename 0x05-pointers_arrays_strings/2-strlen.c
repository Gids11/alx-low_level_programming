#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 *@s: string to find lenght
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	len++;
		return (len);
}
