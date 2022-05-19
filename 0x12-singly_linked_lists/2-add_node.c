#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: a pointer to a pointer
 * @str: A pointer to a character
 * Return: The address of the new element, or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[length])
		length++;
	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
