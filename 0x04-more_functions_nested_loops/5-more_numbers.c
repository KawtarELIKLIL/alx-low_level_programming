#include "main.h"

/**
* more_numbers - prints numbers 10times
*
* Return: numbers from 0 to 14
*/

void more_numbers(void)
{
	int r;
	int n;

	for (r = 0; r < 10; r++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}

	_putchar('\n');
	}
}
