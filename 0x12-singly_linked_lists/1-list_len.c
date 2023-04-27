#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: the head node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int b

if (h == NULL)
return (0);
for (b = 1; h->next != NULL; b++)
h = h->next;
return (b);
}
