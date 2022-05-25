#include "lists.h"

/**
 * pop_listint - Deletes a headnode of a linked list
 * @head: A pointer to a pointer
 * Return: the head node's data (n), 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}
