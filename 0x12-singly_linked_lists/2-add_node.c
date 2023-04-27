#include "lists.h"
int slen(const char *str);
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
	list_t *addednode;

	if (head == NULL)
		return (NULL);
	addednode = malloc(sizeof(list_t));
	if (addednode == NULL)
		return (NULL);
	if (*head == NULL)
		addednode->next = NULL;
	addednode->next = *head;
	addednode->str = strdup(str);
	addednode->len = slen(str);
	*head = addednode;
	return (*head);
}

/**
 * slen - getting length of string
 * @str: the string
 *
 * Return: the length
 */
int slen(const char *str)
{
	int a;

	if (str == NULL)
		return (0);
	for (a = 0; str[a] != '\0'; a++)
		;
	return (a);
}
