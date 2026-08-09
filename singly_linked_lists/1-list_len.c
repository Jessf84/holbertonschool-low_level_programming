#include <stddef.h>
#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list_t list
 * @h: pointer to the head of the linked list
 *
 * Return: the totoal number of nodes inside the list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
