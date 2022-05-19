#include "lists.h"

/**
 * free_list - frees a list
 * @head: A pointer to list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
