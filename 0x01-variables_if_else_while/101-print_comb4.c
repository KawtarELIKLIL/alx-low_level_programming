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
	int s;

	for (n = 48; n <= 55; n++)
	{
		for (m = n + 1; m <= 56; m++)
		{
			for (s = m + 1; s <= 57; s++)
			if ((n != m) != s)
			{
				putchar(n);
				putchar(m);
				putchar(s);
				if (n < 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		s++;
	}

	putchar('\n');
	return (0);
}
