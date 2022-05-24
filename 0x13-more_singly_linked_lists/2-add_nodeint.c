#include "lists.h"
#include <string.h>

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: a pointer to a pointer
 * @n: A pointer to a character
 * Return: The address of the new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	int length = 0;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	while (n[length])
		length++;
	temp->n = length;
	temp->n = strdup(n);
	temp->next = *head;
	*head = temp;
	return (temp);
}
