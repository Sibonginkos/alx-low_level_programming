#include "lists.h"
#include <stdio.h>

/**
 * recursion_printer - prints all elements
 * @h: A pointer
 * Return: Number of nodes
 */

size_t recursion_printer(const listint_t *h)
{
	printf("%d\n", h->n);
	return (1 + recursion_printer(h->next));
}
