#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: Argument count
 * @argv: A pointer to a character
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[0]);
	return (0);
}
