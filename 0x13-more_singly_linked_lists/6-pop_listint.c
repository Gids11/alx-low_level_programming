#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: the head node
 *
 * Return: 0 if list is empty, else the contents of the head node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *savednode;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	savednode = (*head)->next;
	free(*head);
	*head = savednode;
	return (n);
}
