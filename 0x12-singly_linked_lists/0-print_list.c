#include "lists.h"

/**
 * print_list - a function to print the elements of a list
 * @h: first node
 *
 * Return: Nodes total in the list
 */
size_t print_list(const list_t *h)
{
	int a;

	if (h == NULL)
		return (0);
for (a = 1; h->next != NULL; a++)
{
if (h->str == NULL)
printf("[%u] %s\n", h->len, "(nil)");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
}
printf("[%u] %s\n", h->len, h->str);
return (a);
}
