#include "main.h"

/**
 * _isupper - Determining uppercase characters.
 * @c: The character.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
