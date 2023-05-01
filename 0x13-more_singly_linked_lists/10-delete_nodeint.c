#include "lists.h"
/**
 * delete_nodeint_at_index - deleting a node at a given index
 * @head: head node
 * @index: index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *node, *deleted;

	node = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (a = 0; a < index - 1 && node != NULL && index != 0; a++)
		node = node->next;
	if (node == NULL)
		return (-1);
	if (index == 0)
	{
		deleted = node->next;
		free(node);
		*head = deleted;
	}
	else
	{
		if (node->next == NULL)
			deleted = node->next;
		else
			deleted = node->next->next;
		free(node->next);
		node->next = deleted;
	}
	return (1);
}
