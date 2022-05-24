#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a list_t list
 * @h: A pointer to a constant list_t
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
