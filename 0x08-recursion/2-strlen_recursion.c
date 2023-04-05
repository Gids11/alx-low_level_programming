#include "main.h"
/**
 * _strlen_recursion - returning lenght of a string
 * @s: the string
 *
 * Return: string lenght
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
l += _strlen_recursion(s + 1);
	}
	return (l);
}
