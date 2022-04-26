#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: a pointer to a character pointer
 * @to: a character pointer
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
