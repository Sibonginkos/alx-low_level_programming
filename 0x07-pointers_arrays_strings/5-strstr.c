#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: A character pointer
 * @needle: a charcter pointer
 * Return: A pointer to the biginning of substring, else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] == needle[i]; i++)
		if (haystack[i] == '\0')
			return (0);
	return (haystack);
}
