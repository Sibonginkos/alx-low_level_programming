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
	
	temp = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)-> = n;
	(*head)->next = temp
	return (*head);
	free(*head);
}
