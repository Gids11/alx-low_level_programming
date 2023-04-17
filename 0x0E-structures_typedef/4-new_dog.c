#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - getting the lenght of a string
 * @s: the string
 *
 * Return: lenght of s
 */
int _strlen(char *s)
{
	int l = 0;

	do	{
		l++;
	} while (*s++);
		return (l);
}

/**
 * _strcpy - copying a string
 * @dest: the destination to copy to
 * @src: the source to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog - creating a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: the new dog, NULL if the fuction fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n;

	if (name == NULL)
		return (NULL);
	if (age < 0)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	n = malloc(sizeof(dog_t));
	if (n == NULL)
		return (NULL);
	(*n).name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*n).name == NULL)
	{
		free(n);
		return (NULL);
	}
	(*n).owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*n).owner == NULL)
	{
		free((*n).name);
		free(n);
		return (NULL);
	}
	(*n).name = _strcpy((*n).name, name);
	(*n).age = age;
	(*n).owner = _strcpy((*n).owner, owner);
	return (n);
}
