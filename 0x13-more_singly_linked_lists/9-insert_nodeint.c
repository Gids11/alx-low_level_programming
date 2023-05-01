#include "lists.h"
listint_t *mk_node(const int n);

/**
 * *insert_nodeint_at_index - insering new node at a given position
 * @n: node value
 * @idx: index where new node is to be added
 * @head: head node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *node, *newnode, *oldnode;

	node = *head;
	if (head == NULL)
		return (NULL);
	newnode = mk_node(n);
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	if (idx == 0)
		*head = newnode;
	for (a = 0; a < idx - 1 && node != NULL && idx != 0; a++)
		node = node->next;
	if (node == NULL)
		return (NULL);
	if (idx == 0)
		newnode->next = node;
	else
	{
		oldnode = node->next;
		node->next = newnode;
		newnode->next = oldnode;
	}
	return (newnode);
}

/**
 * mk_node - making a new node
 * @n: the node content
 *
 * Return: the new node pointed
 */
listint_t *mk_node(const int n)
{
	listint_t *makenode;

	makenode = malloc(sizeof(listint_t));
	if (makenode == NULL)
		return (NULL);
	makenode->next = NULL;
	makenode->n = n;
	return (makenode);
}
