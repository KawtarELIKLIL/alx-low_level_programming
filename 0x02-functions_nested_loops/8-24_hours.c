#include "main.h"

/**
* jack_bauer - prints every minute of the day
*
* Return: returns zero
*/
void jack_bauer(void)
{
	int min1, min2, hr1, hr2;
	int maxhr2 = 9;

	for (hr1 = 0; hr1 <= 2; hr1++)
	{
		if hr1 == 2
		{
			maxhr2 = 3;
		}
		for (hr2 = 0; hr2 <= maxhr2; hr2++)
		{
			for (min1 = 0; min1 <= 5; min1++)
			{
				for (min2 = 0; min2 <= 9; min2++)
				{
					_putchar(hr1 + '0');
					_putchar(hr2 + '0');
					_putchar(':');
					_putchar(min1 + '0');
					_putchar(min2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
