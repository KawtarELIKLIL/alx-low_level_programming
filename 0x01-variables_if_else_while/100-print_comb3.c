#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int m;
	int s = 49;

	for (n = 48; n <= 56; n++)
	{
		for (m = s; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
			if (n < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
		s++;
	}

	putchar('\n');
	return (0);
}
