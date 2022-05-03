#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	unsigned int i, sum, num;

	sum = 0;

	if (argc < 1)
		printf("0\n");
	if (argc >= '0' && argc <= '9')
	{
	printf("Error\n");
		return (1);
	}
	for (i = 0; argv[argc][i] != '\0'; i++)
	{
		num = atoi(argv[argc]);
		sum += num;
		printf("%d\n", sum);
	}
	return (0);
}
