#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0
 */

void randomPasswordGeneration(int N)
{
	int i = 0;
	
	int randomizer = 0;
	
	srand((unsigned int)(time(NULL)));
	
	char numbers[] = "0123456789";
	
	char letter[] = "a-z";
	
	char LETTER[] = "A-Z";

	char symbols[] = "!@#$^&*?";
	
	char password[N];
	
	randomizer = rand() % 4;


	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}

int main()
{
	int N = 20;

	randomPasswordGeneration(N);

	return (0);
}
