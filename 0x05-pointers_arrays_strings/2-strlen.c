#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns string length
 * @s: Input integer pointer
 * Return: Nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0');
		len++;
	return (len);
}
