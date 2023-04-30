#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n);
listint_t *mknode(const int n);

/**
 * mknode - making a new node
 * @n: the node content
 *
 * Return: the new node pointed
 */
listint_t *mknode(const int n)
{
	listint_t *makenode;

	makenode = malloc(sizeof(listint_t));
	if (makenode == NULL)
		return (NULL);
	makenode->next = NULL;
	makenode->n = n;
	return (makenode);
}

/**
 * *add_nodeint_end - adding a node at the end
 * @head: first node
 * @n: node content
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addnode, *h;

	h = *head;
	if (head == NULL)
		return (NULL);
	addnode = mknode(n);
	if (addnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = addnode;
		return (*head);
	}
	while (h->next != NULL)
		h = h->next;
	h->next = addnode;
	return (*head);
}
