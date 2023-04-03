#include "main.h"
#include <string.h>
/**
 * *_strchr - locating a character in a string
 * @s: string
 * @c: character
 *
 * Return: A pointer to the first occurence of the character in the string
 * else NULL
 */
char *_strchr(char *s, char c)
{
char *u;

	u = strchr(s, c);
	{
if (u != NULL)
return (u);
	else
		return (NULL);
}
}
