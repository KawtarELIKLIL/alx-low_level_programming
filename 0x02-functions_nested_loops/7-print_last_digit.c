#include "main.h"

/**
* print_last_digit - prints the last number
* @n: input number
* Return: the last digit
*/
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (n >= 0)
	{
		_putchar(48 + l);
		return (l);
	}
	else if (n < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	_putchar('\n');
}
