#include"main.h"

/**
* main - prints numbers to 100
*
* Return: always 0
*/

int main(void)
{
	int n;

	_putchar(49);
	for (n = 2; n <= 100; n++)
	{
		_putchar(32);
		if ((n % 3) == 0)
		{
			_putchar(70);
			_putchar(105);
			_putchar(122);
			_putchar(122);
		}
		else if ((n % 5) == 0)
		{	
			_putchar(66);
			_putchar(117);
			_putchar(122);
			_putchar(122);
		}
		else
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
	}
	_putchar('\n');
	return (0);
}
