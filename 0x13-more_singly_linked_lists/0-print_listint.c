#include "lists.h"
/**
 * print_listint -  function that prints all the elements of a listint_t list.
 * @h: head node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int elements;

	if (h == NULL)
		return (0);
	elements = 0;
	do {
		printf("%d\n", h->n);
			h = h->next;
			elements++;
	} while (h != NULL);
	return (elements);
}
