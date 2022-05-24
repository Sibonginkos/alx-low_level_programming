#include "lists.h"

/**
 * listint_len - lists number of elements in a linked lists
 * @h: A pointer to a constant
 * Return: The number of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
