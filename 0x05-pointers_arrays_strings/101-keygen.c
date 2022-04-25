#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int i;
	char c[] = "[a-zA-Z] || [0-9]";
	char ps[];
	srand((unsigned)time(NULL));

	for (i = 0; c[i] != '\0'; i++)
		c[i] = rand() % 58;
		p = getRandom();
	printf("%s", c);
	return (0);
}
