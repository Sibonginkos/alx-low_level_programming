#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of program
 * @ac: An integer input
 * @av: A pointer to a character pointer
 * Return: A pointer to new string, NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, len;
	char *s;

	len = ac - 1;
	s = malloc(sizeof(char) * (len + 1));
	s[0] = '\0';

	if (s == NULL)
		return (NULL);
	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += atoi(av[i]);
	for (i = 0; av[i]; i++)
		strcat(s, av[i]);
	s[i] = '\n';
	return (s);
	free(s);
}
