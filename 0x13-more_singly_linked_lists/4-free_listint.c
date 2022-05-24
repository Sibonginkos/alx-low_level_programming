#include "lists.h"

/**
 * free_listint - frees a list
 * @head: A pointer to list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
