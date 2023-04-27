#include "lists.h"
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
	addednode->len = len(str);
	*head = addednode;
	return (*head);
}
