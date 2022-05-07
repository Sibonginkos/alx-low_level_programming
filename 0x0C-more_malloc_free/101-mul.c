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
	int num1, num2, mul;

	if (argc != 3)
	{
		printf ("Error\n");
		exit (98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf ("%d\n", mul);
	}
	if ((num1 == 0 && num1 <= 9) && (num2 == 0 && num2 <= 9))
		exit (0);
	else
	{
		printf ("Error\n");
		exit (98);
	}
	return (0);
}
