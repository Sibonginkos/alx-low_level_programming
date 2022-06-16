#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 1 on sucess
 */

int main(int argc, char *argv[])
{
	printf("argc: %d, argv: %p\n", argc, (void *)*argv);
	return (1);
}
