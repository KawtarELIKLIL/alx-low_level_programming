#include "main.h"

/**
* more_numbers - prints numbers 10times
*
* Return: numbers from 0 to 14
*/

void more_numbers(void)
{
	int i;
	int r;
	int n;
	int n1;
	int n2;

	for (r = 0; r < 10; r++)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}
		for (n = 10; n <= 14; n++)
		{
			n1 = n / 10;
			n2 = n % 10;
			_putchar(n1 + '0');
			_putchar(n2 + '0');
		}

	_putchar('\n');
	}
}
