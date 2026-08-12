#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index of a list.
 * @head: Double pointer to the head of the doubly linked list.
 * @index: The index of the node that should be deleted (starts at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	/* Case 1: Delete the head node */
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	/* Traverse to the node at the specified index */
	i = 0;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	/* Case 2: Index is out of bounds */
	if (current == NULL)
		return (-1);

	/* Case 3: Delete middle or tail node */
	if (current->prev != NULL)
		current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
