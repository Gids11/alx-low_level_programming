#include "lists.h"
/**
 * *reverse_listint - reversing listint_t linked list
 * @head: first node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *node1, *node2;

if (head == NULL || *head == NULL)
return (NULL);
node1 = *head;
*head = node1->next;
node1->next = NULL;
while (1 && *head != NULL)
{
node2 = (*head)->next;
(*head)->next = node1;
node1 = *head;
if (node2 == NULL)
return (*head);
*head = node2;
}
if (*head == NULL)
{
*head = node1;
return (*head);
}
return (NULL);
}
