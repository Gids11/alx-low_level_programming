#include "lists.h"
int slen(const char *string);
list_t *add_node(list_t **head, const char *str);

/**
 * *add_node - adding a new node to a linked list
 * @head: first node
 * @str: string to duplicate
 *
 * Return: return the address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	lists_t addednode;

	if (head == NULL)
		return (NULL);
	addednode = malloc(sizeof(lists_t));
	if (addednode == NULL)
		return (NULL);
	if (*head == NULL)
		addednode->next = NULL;
	addednode->next = *head;
	addednode_.str = strdup(str);
	addednode->slen = slen(str);
	*head = addednode;
	return (*head);
}

/**
 * slen - getting length of string
 * @string: the string
 *
 * Return: the length
 */
int slen(const char *string)
{
	int a;

	if (string == NULL)
		return (0);
	for (a = 0; string[a] != '\0'; a++)
		;
	return (a);
}
