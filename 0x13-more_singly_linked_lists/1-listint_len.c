#include "lists.h"
/**
 * listint_len - gets length of a linked list
 *@h: First node
 *
 * Return: the length
 */
size_t listint_len(const listint_t *h)
{
	unsigned int length;

	if (h == NULL)
		return (0);
	length = 0;
	while (h != NULL)
	{
		h = h->next;
	length++;
	}
	return (length);
}
