#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: A character input
 * Return: Number of bytes stored in string pointed by s
 */

int _strlen_recursion(char *s)
{
	char *p = s;

	if (*p == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
