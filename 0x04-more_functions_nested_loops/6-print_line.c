#include "main.h"

/**
* print_line - prints line
* @n: lenth of line
* Return: line
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
