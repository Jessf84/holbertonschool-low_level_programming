#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of the dlistint_t linked list,
 * @head: Points to the head of the doubly linked list.
 * @index: index of the node to locate, starting from 0.
 *
 * Return: Pointer to the desired node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index;

	current_index = 0;
	while (head != NULL)
	{
		if (current_index == index)
		{
			return (head);
		}
		head = head->next;
		current_index++;
	}

	return (NULL);
}
