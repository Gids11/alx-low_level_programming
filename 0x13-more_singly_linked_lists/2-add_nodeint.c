#include "lists.h"
/**
 * *add_nodeint - adding a node at the start of a linked list
 * @head: first node
 * @n: number of nodes
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *creatednode;

	if (head == NULL)
		return (NULL);
	creatednode = malloc(sizeof(listint_t));
	if (creatednode == NULL)
		return (NULL);
	if (*head == NULL)
	creatednode->next = NULL;
	else
		creatednode->next = *head;
	creatednode->n = n;
	*head = creatednode;
	return (*head);
}
