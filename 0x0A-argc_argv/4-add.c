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
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(argc >= '0' && argc <= '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		sum += num;
		}
	printf("%d\n", sum);
	return (0);
}
