#include "main.h"

/**
* times_table - multiplication table
*
* Return: multiplication table
*/
void times_table(void)
{
	int n1 = 0;
	int n2 = 0;
	int m;
	int m1;
	int m2;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			m = n1 * n2;
			if (m > 9)
			{
				m1 = m / 10;
				m2 = m % 10;
				_putchar(m1 + '0');
				_putchar(m2 + '0');
			}
			else
			{
				_putchar(m + '0');
			}
			_putchar(44);
			_putchar(32);
		}
		_putchar('\n');

	}
}
