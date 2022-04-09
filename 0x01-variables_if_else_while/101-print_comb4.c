#include <stdio.h>

/**
 * main - print combination of three digits
 * Results: Always 0 (Success)
 */

int main(void)
{
	int i,p,q;
	for (i = '0'; i < '9'; i++)
	{
		for (p = i + 1; p <= '9'; p++)
	{
		for (q = p + 1; q <= '9'; q++)
	{
		if ((p != i) != q)	
		{
			putchar(i);
			putchar(p);
			putchar(q);

			if (i == '7' && p == '8')
				continue;
			putchar(',');
			putchar(' ');
		}		
	}
	}
	}
	putchar('\n');
	return (0);
}
