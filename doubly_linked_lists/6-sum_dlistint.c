#include "lists.h"

/**
 * sum_dlistint - Tetuns the sum of all the data (n) of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 *
 * Return: The sum of all integers stored in the list, or 0 if empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
