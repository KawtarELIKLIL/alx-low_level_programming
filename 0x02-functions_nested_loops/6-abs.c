#include "main.h"

/**
*_abs - prints the absolute value of a number
* @n: input number
* Return: the absolute value
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
