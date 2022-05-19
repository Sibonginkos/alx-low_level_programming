#include "lists.h"

/**
 * list_len - lists number of elements in a linked lists
 * @h: A pointer to a constant
 * Return: The number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
