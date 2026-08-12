#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added (starts at 0).
 * @n: The integer value to store in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;
	i = 0;
	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL)
		return (NULL);

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = tmp->next;
	new_node->prev = tmp;
	tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
