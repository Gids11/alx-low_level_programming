#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a listint_t linked list
 * @head: first node
 *
 * Return: 0 if list is empty, else sum of data
 */
int sum_listint(listint_t *head)
{
	int datasum = 0;

	if (head == NULL)
	return (0);
	do {
		datasum += head->n;
			head = head->next;
	} while (head != NULL);
	return (datasum);
}
