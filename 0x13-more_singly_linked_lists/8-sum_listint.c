#include "lists.h"

/**
 * sum_listint - Sum of elements in a list
 * @head: A pointer
 * Return: Sum of all data from a list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
