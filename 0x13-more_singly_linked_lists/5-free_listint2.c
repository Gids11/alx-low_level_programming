#include "lists.h"
/**
 * free_listint2 - freeing a linked list
 * @head: the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *savednode;

	if (head == NULL || *head == NULL)
		return;
	for (node = *head; node->next != NULL ;)
	{
		savednode = node->next;
		free(node);
		node = savednode;
	}
	free(node);
	*head = NULL;
}
